# ArgonSDK

- [ArgonSDK](#argonsdk)
  - [Overview](#overview)
  - [Setup](#setup)
  - [TBL-code-only-docs](#tbl-code-only-docs)
  - [ArgonSDK-FieldGuide](#argonsdk-fieldguide)

## Overview

An Unreal Engine (4.25) project that mimics the original Chivalry 2 development project.

Following asset types are not included and need to be extracted by user:
> extraction of these assets is not required for pure Blueprint mods
- Texture2D
- Font
- FontFace
- StaticMesh

Join [Chiv2 Unchained Discord](https://discord.gg/chiv2unchained) to be notified when additional content and docs/guides are released.

## Setup

1. Clone this repository (`git clone --recursive <url>`)
2. Update submodules (`git submodule update --remote`)
3. Extract Meshes and Textures
    1. [Unpaking Assets](https://github.com/Chiv2-Community/ArgonSDK/wiki/Unpaking-assets)
    2. [Serializing Unpaked Assets](https://github.com/Chiv2-Community/ArgonSDK/wiki/Serializing-unpaked-assets)
    3. [Asset Generation](https://github.com/Chiv2-Community/ArgonSDK/wiki/Asset-generation)

## TBL-code-only-docs

Generated Doxygen / Blueprint documentation is available here: https://github.com/Chiv2-Community/chiv2-tblcpp-obsidian-clean

_Install Obsidian and open the folder as vault. Hint: Enable "Show existing files only" in the graph to hide variables_

## ArgonSDK-FieldGuide
This repository contains some basic modding tutorials specific for Chiv2.
[Modding process overview](https://knutschbert.github.io/ArgonSDK-FieldGuide/Introduction/)
[Tutorial: Create a FFFA Map](https://knutschbert.github.io/ArgonSDK-FieldGuide/Tutorials/T2%20Create%20a%20Free-For-All%20Map%20%28FFA%29/)
[Tutorial: Create a Blueprint Mod](https://knutschbert.github.io/ArgonSDK-FieldGuide/Tutorials/T3%20Create%20your%20first%20Blueprint%20Mod/)