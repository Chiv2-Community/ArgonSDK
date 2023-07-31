# ArgonSDK

- [ArgonSDK](#argonsdk)
  - [Overview](#overview)
  - [TBL-code-only-docs](#tbl-code-only-docs)
- [Asset generation](#asset-generation)
  - [Prerequisites](#prerequisites)
  - [Installing asset generator](#installing-asset-generator)
  - [Using the Asset Generator](#using-the-asset-generator)
  - [Result](#result)
- [mod paking](#mod-paking)
  - [prerequisites](#prerequisites-1)
  - [Step 1: cooking](#step-1-cooking)
  - [Step 2: paking](#step-2-paking)
  - [Step 3: Installation](#step-3-installation)

## Overview

This is a "pre-release" version containing only (TBL) Source code.

Join [Chiv2 Unchained Discord](https://discord.gg/chiv2unchained) to be notified when additional content and docs/guides are released.

## TBL-code-only-docs

Generated Doxygen / Blueprint documentation is available here: https://github.com/Chiv2-Community/chiv2-tblcpp-obsidian-clean

_Install Obsidian and open the folder as vault. Hint: Enable "Show existing files only" in the graph to hide variables_

# Asset generation

For using Chivalry assets in your custom maps/mods

## Prerequisites

1. Unreal engine 4.25 is installed
2. ArgonSDK cloned
3. UEAssetToolkit-Fixes FBX-only branch cloned
4. Assets are un-paked
5. These un-paked assets are serialized:
    * Texture2d
    * Staticmesh
    * FontFaces
    * Fonts

## Installing asset generator

Drag and drop these folders from the UEAssetToolkit-Fixes **FBX-Only** branch into the plugins folder of the ArgonSDK Unreal project directory

![Asset generator install location](docs-assets/assetGen/assetGenPluginsMove-annotated.png)

Open unreal engine, and browse to the location of your cloned ArgonSDK. Open the .uproject in that directory.

![opening the ArgonSDK project in Unreal](docs-assets/assetGen/open_sdk_proj-annotated.png)

You will get a popup asking if you want to rebuild several modules (including the asset generator). Click yes and wait for them to build. You may need Visual Studio and it's toolchains installed to do this.

![Rebuild-popup](docs-assets/assetGen/rebuild-models-annotated.png)

## Using the Asset Generator

> You should probably at least skim this section in it's entirety before starting. Do not start generating assets before reading the warnings and recommendations.

Open the asset generator tool here.

![Location of the asset generator tool in Window > Developer Tools > Asset Generator](docs-assets/assetGen/asset-generator-location.png)

The asset generator window looks like this:

![Asset generator tool window](docs-assets/assetGen/asset-gen.png)

1. Set ***Dump Root Folder Path*** to wherever you put your CAS_output folder.
2. Set ***Assets To Generate Per Tick*** to 32 (the max). If performance is an issue or it's too strenuous on your computer, you can reduce this value.
3. Ensure that ALL asset types are selected in the ***Asset Type Filter*** section.
4. Select the paths you want to generate assets from.

![Asset generation example](docs-assets/assetGen/during-generation.png)

>**IMPORTANT:** You should do this asset generation in batches. Check a few directories for generation, generate those, and then generate the next few directories. Keep an eye on your memory usage, and whenever you feel you don't have enough memory to do the next batch, restart the editor to free up some. 

Memory consumed by this process is **NOT** freed until the unreal editor is closed completely. If you try to do it all at once, you will get an out of memory error or a 100GB page file. If it crashes due to memory, I recommend re-doing the batch in two smaller chunks with the **Refresh Assets** checkbox in the generator checked in order to re-do any assets in that batch which may have been corrupted by the crash.

Some very large directories are:
* Characters
* Environemnts/Architecture
* Environments/Landscape
* Environments/Props
* UI
* Weapons

Split these directories up into batches, generating assets and then restarting the editor to free memory between batches. This process is long and tedious, and will take hours.

## Result
You should have had the following directory structure generated in ArgonSDK's Content folder:
```
ArgonSDK\Content
├── AI
├── Abilities
├── Animation
├── ArtPipeline
├── Audio
├── Blueprint
├── Characters
├── Cinematics
├── Collections
├── Config
├── Custom_Lens_Flare_VFX
├── Customization
├── Debug
├── Developers
├── Environments
├── FX
├── Game
├── GameModes
├── Gameplay
├── Interactables
├── Inventory
├── Localization
├── Maps
├── MapsTest
├── Materials
├── Meshes
├── Mods
├── Movies
├── Screenshots
├── Trailer_Cinematic
├── UI
└── Weapons
```

# mod paking

For easy distribution after you've made your mod/map.

## prerequisites

1. Unreal engine 4.25 is installed
2. A mod that can be cooked to loose files and loaded in chivalry
3. [This unreal pak tool](https://www.fluffyquack.com/tools/unrealpak.rar)

## Step 1: cooking

Cook your mod as you normally would for loose files

![how to cook in unreal editor](docs-assets/modPak/cooking.png)

## Step 2: paking

Extract the [unreal pak tool](https://www.fluffyquack.com/tools/unrealpak.rar) anywhere you want, and create a new folder for your mod. Replace `<your mod>` from here on out with whatever you want your mods to be called. Make new folders under `<your mod>` to replicate this folder structure, with your cooked assets going under the `Content` folder:

```
unrealpak
├── <your mod>
│   └── TBL
│       └── Content
│           └── Mods
│               ├── Maps
│               ├── UI
│               └── Weapons
├── UnrealPak-With-Compression.bat
├── UnrealPak-Without-Compression.bat
├── UnrealPak.exe
├── UnrealUnpak.bat
└── readme.txt
```

You do not need to copy over any unpaked->serialized->generated game files used in your map that you may have cooked. The game will find those assets referenced in it's own pak.

In windows file explorer, drag and drop the `<your mod>` folder onto the `UnrealPak-With-Compression.bat` file to create a `<yourmod>.pak` file in that directory. You can do the same with `UnrealPak-Without-Compression.bat` if you don't want your files compressed

![dragging folder onto batch file](docs-assets/modPak/paking.gif)

## Step 3: Installation

Paked mods cannot be installed the same way as loose file mods. In order to load and use them, the generated `<yourmod>.pak` file needs to be placed in the `Chivalry2\TBL\Content\Paks` folder. 
