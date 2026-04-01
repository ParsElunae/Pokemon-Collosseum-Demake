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

### Still bootstrap / incomplete
- final map layouts and tilesets are placeholder reuse
- final trainer data is not authored yet
- full Shadow persistence/router is not finished yet
- final travel UI integration is not finished yet
- `.pory` authored sources are not yet the direct build path
- map groups / core build-spine edits are still the main remaining integration hinge

## Exact remaining core-file hinges
These are the old repo files that still matter most for the bootstrap layer:
- `data/maps/map_groups.json`
- `data/specials.inc`
- `data/event_scripts.s`

## Important project-file conflict note
The uploaded loose CS01 files still appear to reflect the older Pyrite-unlock version of the slice.
The live repo bootstrap has already been steered toward the corrected Construction-Lot-first direction.
Do not silently merge those two assumptions together.
Surface and resolve that conflict explicitly in later passes.

## Immediate next recommended pass
1. patch `data/maps/map_groups.json` so mapjson groups include the six Colosseum bootstrap maps
2. patch `data/specials.inc` to include `data/scripts/colosseum/colosseum_specials.inc`
3. decide whether `data/event_scripts.s` still needs a direct include once the standalone Colosseum script spine is compiled in practice
4. then attempt the first real compile and see what unresolved symbols remain
