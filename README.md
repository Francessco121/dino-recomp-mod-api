# Dinosaur Planet: Recompiled Mod API
This repository contains everything necessary to create mods for [Dinosaur Planet: Recompiled](https://github.com/Francessco121/dino-recomp), including:

- Symbol definitions
- Decompilation headers
- Recomp modding headers
- Recomp-specific headers for Dinosaur Planet DLLs

## Writing Mods
Please see the [Recomp Modding](https://hackmd.io/fMDiGEJ9TBSjomuZZOgzNg) document for a general explanation of the N64 recomp modding framework.

## Regenerating Symbols
When updating to a new version of the decompilation, the symbol TOML files and DLL headers must be regenerated.

### 1. Build the Decompilation Project
Follow the build instructions in [the decompilation readme](./dinosaur-planet/README.md). An up-to-date `build/dino.elf` file is required for the next step.

### 2. Regenerate Symbols
Run the following tool (from this directory) to regenerate symbols and recomp DLL headers:
```bash
python ./dinosaur-planet/tools/gen_recomp_syms.py
```
