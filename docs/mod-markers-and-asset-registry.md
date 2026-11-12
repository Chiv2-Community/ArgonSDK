# Mod Markers, Map Markers & the Mod Asset Registry

How a packaged mod describes itself to the Chivalry 2 Unchained loader, so its
content (mods, maps, loading screens) is discovered **quickly** and **without a
game restart**.

This page is the source of truth for the marker **data assets** and the
`ModAssetRegistry.bin` payload. The cook/pak tooling that produces them lives in
the **ArgonSDKTooling** plugin — see
[Knutschbert/ArgonSDKTooling](https://github.com/Knutschbert/ArgonSDKTooling)
(shipped in this SDK at `Plugins/ArgonSDKTooling`); its `README.md` documents the
packaging commands and the in-editor Mod Packer widget.

## Why markers exist

A mounted mod `.pak` is just a bag of cooked assets. To show a mod in the loader,
list its maps in the menu, and pick the right loading screen, the game needs to
find the relevant assets among potentially thousands of entries — fast, on the
game thread, while a loading screen is up.

Markers make that cheap and declarative. A **mod marker** is one small data asset
per mod that names (by soft path) what the mod ships; a **map marker** describes
the maps and their loading screens. Because markers hold only **soft references
and primitives**, the loader can read them without loading the whole mod, and the
asset layout is not frozen into fixed memory offsets.

Two things make discovery fast:

1. **Markers** — a declarative summary the loader reads by property name.
2. **The Mod Asset Registry** (`ModAssetRegistry.bin`) — a prebuilt index the
   loader merges into the live Asset Registry in one step, instead of scanning
   every package in the pak.

If a mod ships neither, the loader still works: it falls back to scanning the pak
headers to find markers and maps. That path is correct but noticeably slower for
large mods and for clients running many mods, which is the whole reason the
registry + markers exist. **Packaging with ArgonSDKTooling gives you both
automatically** — see [For mod authors](#for-mod-authors).

---

## `DA_ModMarker_V2`

One per mod root. Declares the mod and what it registers. Replaces the
deprecated V1 `DA_ModMarker` (which held **hard** references read at fixed
offsets — opening it pulled in the whole referenced graph and froze the layout).
V2 is soft-ref only, ships inside the mod's pak, and stays trivially parseable.

| Field | Type | Purpose |
|-------|------|---------|
| `FormatVersion` | int | Marker schema version; additive changes only, bumped on a semantic break. |
| `ModId` | string | Canonical id — equals the `mod.json` name and the pak stem. |
| `ModVersion` | string | Mod version, stamped from `mod.json` at cook time. |
| `ModActorClasses` | soft class path[] | Mod actor classes to register/spawn; each supplies the mod's name/author/version from its class default object. |
| `ExtraAssets` | soft object path[] | Non-class content to register (data assets, etc.). |
| `BundledMarkers` | soft object path[] | Other V2 markers shipped in the **same** pak (cross-directory, path-preserving) — lets one pak carry a collection of mods. |
| `ExcludedPaths` | string[] | Relative path prefixes to skip when cooking/packing and when auto-detecting nested content. |
| `Icon` | soft Texture2D | Mod icon for the loader UI. |
| `ListTags` | string[] | Free-form tags for filtering/listing. |
| `OwnPak` | bool | Pack this marker's content into its own dependency pak instead of merging into the root pak. |
| `ApplyVersionToBundled` | bool | Push this marker's version onto bundled markers and their actors at cook time. |

**How the loader uses it:** it registers the `DA_ModMarker_V2` class into the
Asset Registry, finds every instance, and reads `ModId`, `ModVersion`,
`FormatVersion`, `Icon`, `ListTags`, `ModActorClasses` and `BundledMarkers` **by
property name**. Each `ModActorClasses` entry is loaded for its class default
object, which carries the user-facing mod metadata. A mod listed by both a V1 and
a V2 marker yields a single entry, taken from V2.

> V1 `DA_ModMarker` is still recognised for backwards compatibility. New mods
> should ship V2; existing V1 markers keep working.

---

## `DA_MapMarker_V2`

Describes the maps a mod ships and the loading screen each one uses. The loader
reads it once (as a game-thread job after registration) and serves the result
whenever the game asks for a map's loading-screen config.

| Field | Type | Purpose |
|-------|------|---------|
| `Maps` | `F_ShippedMap`[] | The maps this mod ships, one row each (see below). |
| `DefaultLoadingScreen` | soft Texture2D | Loading-screen texture for rows that set none of their own. |
| `IgnoredMaps` | soft object path[] | Maps found under the folder but deliberately not shipped. |
| `ExtraRequiredMaps` | soft object path[] | Extra maps to include that the folder scan would miss. |
| `ShippedMapLayers` | soft object path[] | World-partition / sublevel layers that travel with the maps. |
| `ExcludeFolders` | string[] | Folder prefixes to skip when discovering maps. |
| `ExcludeNamePatterns` | string[] | Name patterns to skip when discovering maps. |
| `Notes` | string | Author notes; not read at runtime. |

### `F_ShippedMap` (one row per map)

| Member | Type | Purpose |
|--------|------|---------|
| `Map` | soft object path | The map (`.umap`) this row ships. |
| `State` | `E_MapShipState` | `Shipped` (included) or `Held` (kept in the marker but **not** shipped). |
| `LoadingScreen` | soft Texture2D | This map's loading-screen texture; empty falls back to `DefaultLoadingScreen`. |
| `MapName` | string | Display name, used as the loading-screen title. |
| `MapDescription` | string | Description, used as the loading-screen subtitle. |
| `GamemodeType` | int | Game-mode id carried for listing/UI. |
| `AttackingFaction` | int | Attacking-faction id carried for listing/UI. |

`Held` rows let you park a work-in-progress map in the marker without shipping it.
The loader ignores them.

### Where the map summary comes from

The summary fields (`MapName`, `MapDescription`, `GamemodeType`,
`AttackingFaction`) live **on each row**, but you don't type them by hand: the
tooling fills them from the map's **Asset Registry map-summary tags** when the row
is created or refreshed (those tags are baked at cook time and readable without
loading the map). At runtime the loader reads the values straight from the row —
it never queries the Asset Registry — using `MapName` as the loading-screen title
and `MapDescription` as the subtitle, and falling back to the map's short package
name when a row has no name.

---

## `ModAssetRegistry.bin`

When the tooling cooks a mod, Unreal produces a cooked **Asset Registry** for that
mod's content. The tooling renames it to `ModAssetRegistry.bin` and packs it
inside the mod's pak, under the mod's own namespace
(`…/<ModDir>/ModAssetRegistry.bin`).

At startup the loader **merges** this prebuilt index straight into the live Asset
Registry in a single step, so queries like "every map in this mod" or "every
`DA_ModMarker_V2`" resolve immediately — no per-package scanning.

A pak that ships `ModAssetRegistry.bin` skips the fallback header scan entirely.
If the file is missing, or the engine rejects it (wrong/incompatible format), the
loader automatically falls back to header-scan discovery for that pak, so a
mod never fails to load — it just loads the slower way.

---

## For mod authors

**The easy path — let the tooling do it.** Package your mod with the
[ArgonSDKTooling](https://github.com/Knutschbert/ArgonSDKTooling) plugin (the
in-editor **Mod Packer** widget, or `deploy.py`). It creates/updates the markers
from your folder, stamps the version from `mod.json`, cooks, and writes
`ModAssetRegistry.bin` into the pak for you. See the plugin's `README.md` for the
exact commands and widget workflow.

- Create a mod marker for a folder: the tooling's `create_v2_for` / Mod Packer
  "create marker" action. Keep one `DA_ModMarker_V2` per mod root; add
  `BundledMarkers` to ship several mods in one pak.
- Create a map marker and populate its `Maps` rows from the folder, then set each
  map's loading screen (or a single `DefaultLoadingScreen`).
- Author maps with their map-summary tags so the loader shows a proper name and
  description (the tooling's `validate` step prompts you if they are missing).

**The manual path.** You can author the markers by hand and cook the mod yourself
— the loader only needs the marker fields above and, ideally,
`ModAssetRegistry.bin` in the pak. Without the registry file your mod still loads
via the fallback header scan; expect slower startup, especially for large mods or
players running many mods at once. If you hand-roll packaging and your mod shows
up slowly or not at all, a missing/stale marker or registry file is the first
thing to check.

---

## Related documentation

- **Packaging & commands:** [ArgonSDKTooling](https://github.com/Knutschbert/ArgonSDKTooling)
  `README.md` (cook/pak, `sync-tooling`, the Mod Packer widget).
- **Loader behaviour:** the Unchained plugin registers markers and merges
  `ModAssetRegistry.bin` into the runtime Asset Registry, with header-scan
  discovery as the fallback.
- Questions: [Chivalry 2 Unchained Discord](https://discord.gg/chiv2unchained).
