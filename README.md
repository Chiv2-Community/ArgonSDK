# ArgonSDK

- [ArgonSDK](#argonsdk)
  - [Overview](#overview)
  - [Setup](#setup)
  - [ArgonSDK-FieldGuide](#argonsdk-fieldguide)
  - [TBL-code-only-docs](#tbl-code-only-docs)

## Overview

An Unreal Engine (4.25) project that mimics the original Chivalry 2 development project.

Following asset types are not included and need to be extracted by user:
- Texture2D
- Font
- FontFace
- StaticMesh
> extraction of these assets is not required for pure Blueprint mods

Join [Chivalry 2 Unchained Discord](https://discord.gg/chiv2unchained) to be notified when additional content and docs/guides are released.

## Setup

1. Clone this repository (`git clone --recursive <url>`)
2. Update submodules (`git submodule update --remote`)
3. Extract Meshes and Textures
    1. [Unpaking Assets](https://github.com/Chiv2-Community/ArgonSDK/wiki/Unpaking-assets)
    2. [Serializing Unpaked Assets](https://github.com/Chiv2-Community/ArgonSDK/wiki/Serializing-unpaked-assets)
    3. [Asset Generation](https://github.com/Chiv2-Community/ArgonSDK/wiki/Asset-generation)
4. Open `TBL.uproject` and rebuild dependencies if prompted
5. Locate and run Mod Packer Widget (`Scripts/ModHandling/ModPackerWidget`)

## ArgonSDK-FieldGuide
This repository contains some basic modding tutorials specific for Chiv2.
- [Chivalry 2 class reference](https://knutschbert.github.io/ArgonSDK-FieldGuide/ClassDocsGenerated/index_classes.html)
- [Modding process overview](https://knutschbert.github.io/ArgonSDK-FieldGuide/Introduction.html)
- [Tutorial: Create a FFA Map](https://knutschbert.github.io/ArgonSDK-FieldGuide/Tutorials/T2%20Create%20a%20Free-For-All%20Map%20%28FFA%29.html)
- [Tutorial: Create a Blueprint Mod](https://knutschbert.github.io/ArgonSDK-FieldGuide/Tutorials/T3%20Create%20your%20first%20Blueprint%20Mod.html)

## TBL-code-only-docs

Generated Doxygen / Blueprint documentation is available here: https://github.com/Chiv2-Community/chiv2-tblcpp-obsidian-clean

_Install Obsidian and open the folder as vault. Hint: Enable "Show existing files only" in the graph to hide variables_