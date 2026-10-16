# Map name and description on the loading screen

In the level editor, open **World Settings** and use `TBLWorldSettings`.
Set **Map Name**, **Map Description**, **Attacking Faction**, and **Gamemode Type**,
then save the map and cook/package it normally. For example:

- Map Name: `Horde Mode Test Arena`
- Map Description: `This is a Horde Mode test arena`

The SDK now synchronizes those settings to a `TBLMapSummary` object called
`MapSummary` directly inside the map package on save, including cook saves.
Existing maps must be saved again or recooked with the patched editor binaries.
The text remains `FText`; localized text and string-table references are retained.
World Settings is the source of truth; edits to the summary alone are overwritten
by the next save. The summary pointer does not need to be assigned manually.

This supplies metadata. Loading-screen artwork is configured separately. The SDK
still has dummy runtime implementations; its preview is not a substitute for
testing the loading screen in the shipping game. This patch does not implement
the stub `TBLSystemLibrary::GetMapSummary` or change the shipping game's native code.

## Evidence and scope

The original cooked `TBL/Content/Maps/Tournament/TDM_TournamentGrounds.umap`,
read directly from the installed shipping PAKs using CUE4Parse, contains:

- A root package export of type `TBLMapSummary`, named `MapSummary`, with
  `RF_Standalone` (plus load-state flags).
- `MapName` and `MapDescription` pointing to `ST_Map_TDM_TournamentGrounds`
  string-table entries; `GamemodeType` is `TeamDeathMatch`.
- A `TBLWorldSettings.MapSummary` reference to that export, with matching text
  and game mode in World Settings.

The generated SDK declarations already contain the properties, but upstream
`d9d9759e` never populates them during editor saves. The save hook reproduces the
observed serialized layout. It is an SDK authoring implementation, not recovered
shipping source code. It adds no reflected properties or packaged gameplay code.

PIE, gameplay worlds, templates and transient settings are excluded. Maps with
a stale reference into another map receive their own summary; the other map is
not edited. An unrelated object already named `MapSummary` produces an explicit
error instead of being overwritten.

## Validation

Build the editor, then run the three automation tests in separate processes:

```powershell
& "$Engine/Engine/Build/BatchFiles/Build.bat" TBLEditor Win64 Development "-Project=$SDK/TBL.uproject" -WaitMutex -NoHotReloadFromIDE
& "$SDK/Scripts/test_map_summary.ps1" -EngineRoot $Engine -SdkRoot $SDK
```

`Save` writes a temporary map under `Saved/Automation/MapSummary` and checks
first-save creation, package/name/flags, localization, field updates and reuse.
`Reload` runs in a fresh process and reads that first-save fixture from disk,
checking the root export, text, localization identity and World Settings reference.
`Isolation` checks copied maps, string-table references, cleared descriptions,
PIE/transient exclusion and name conflicts. Logs remain under the same Saved folder.

For an integration check, copy the generated fixture into a temporary Content
folder, cook that map for WindowsNoEditor, and inspect its exports. Confirm the
package still contains `MapSummary` and World Settings references it. Remove the
temporary Content fixture afterward; it is not intended for shipping.

The original game's visible loading screen should also be tested with the cooked
map. Matching package metadata alone does not verify artwork, travel URLs or any
game-instance metadata caching in a particular server/launcher setup.
