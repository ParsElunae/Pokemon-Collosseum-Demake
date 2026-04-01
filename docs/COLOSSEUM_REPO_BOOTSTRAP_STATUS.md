# COLOSSEUM REPO BOOTSTRAP STATUS

## Current repo state
The repo is no longer a clean expansion fork.
It now contains the first real Colosseum bootstrap layer for the CS01 vertical slice.

### Added runtime/bootstrap files
- `include/constants/colosseum_cs01.h`
- `include/colosseum_runtime.h`
- `src/colosseum/colosseum_runtime.c`
- `src/data/colosseum/cs01_content_registry.inc`
- `data/scripts/colosseum/colosseum_map_scripts.inc`
- `data/scripts/colosseum/colosseum_specials.inc`
- `data/colosseum_event_scripts.s`

### Added authored CS01 source files
- `data/scripts/colosseum/cs01_outskirt_stand.pory`
- `data/scripts/colosseum/cs01_phenac_city.pory`
- `data/scripts/colosseum/cs01_phenac_mayor_house.pory`
- `data/scripts/colosseum/cs01_phenac_stadium.pory`
- `data/scripts/colosseum/cs01_phenac_pokemart.pory`
- `data/scripts/colosseum/cs01_prestige_precept_center.pory`

### Added bootstrap map folders
- `data/maps/OutskirtStand/`
- `data/maps/PhenacCity/`
- `data/maps/PhenacMayorHouse/`
- `data/maps/PhenacStadium/`
- `data/maps/PhenacPokeMart/`
- `data/maps/PrestigePreceptCenter/`

Each of those folders currently has:
- `map.json`
- `scripts.inc`

## What is real vs. what is still bootstrap
### Real now
- repo-side Colosseum file structure exists
- CS01 location skeleton exists in engine-style map folders
- runtime special functions have a first bootstrap implementation
- Colosseum map scripts have a dedicated central include manifest
- standalone Colosseum script spine exists as its own build-visible assembly file
- the six CS01 bootstrap maps are already registered in `data/maps/map_groups.json`

### Still bootstrap / incomplete
- final map layouts and tilesets are placeholder reuse
- final trainer data is not authored yet
- full Shadow persistence/router is not finished yet
- final travel UI integration is not finished yet
- `.pory` authored sources are not yet the direct build path
- first honest compile/test pass has still not happened yet

## Exact remaining core-file hinges
These are the old repo files that still matter most for the bootstrap layer:
- `data/specials.inc`
- compile feedback from the first real build attempt

`data/maps/map_groups.json` is already patched.
`data/event_scripts.s` is no longer treated as a required hinge for this bootstrap pass.

## Compile-path sanity result
The repo now has a standalone Colosseum script spine in `data/colosseum_event_scripts.s`.
That file already includes `data/scripts/colosseum/colosseum_map_scripts.inc`.

Under the current Makefile, top-level `data/*.s` files are compiled automatically.
That means the live build should already see the Colosseum map-script object without needing a direct include in `data/event_scripts.s`.

## Important project-file conflict note
The uploaded loose CS01 files still appear to reflect the older Pyrite-unlock version of the slice.
The live repo bootstrap has already been steered toward the corrected Construction-Lot-first direction.
Do not silently merge those two assumptions together.
Surface and resolve that conflict explicitly in later passes.

## Immediate next recommended pass
1. patch `data/specials.inc` to include `data/scripts/colosseum/colosseum_specials.inc`
2. run the first real compile attempt
3. inspect unresolved symbols, generator failures, missing constants, and missing runtime/data edges based on the actual build output
4. only then patch the next blockers revealed by compile feedback
