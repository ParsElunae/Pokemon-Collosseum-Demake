# COLOSSEUM CORE BUILD PATCH CHECKLIST

This file shrinks the remaining bootstrap integration down to a few core-file edits.
The new Colosseum source files already exist in the repo.
The engine now needs to be told to include them.

## 1. PATCH `data/specials.inc`
Add this include once after the `def_special` macro section is active:

```asm
	.include "data/scripts/colosseum/colosseum_specials.inc"
```

Recommended placement:
- after the last existing `def_special` block or near other custom-system additions
- before the file ends

## 2. PATCH `data/event_scripts.s`
Add this include once anywhere in the script include spine:

```asm
	.include "data/scripts/colosseum/colosseum_map_scripts.inc"
```

Recommended placement:
- near the other map-script include blocks
- before the standard shared scripts near the bottom is fine for bootstrap work

## 3. PATCH `data/maps/map_groups.json`
Add the Colosseum bootstrap maps to a live map group so mapjson generates them.
For the bootstrap phase, the least disruptive option is to append them to `gMapGroup_SpecialArea`.

Add:
- `OutskirtStand`
- `PhenacCity`
- `PhenacMayorHouse`
- `PhenacStadium`
- `PhenacPokeMart`
- `PrestigePreceptCenter`

## 4. OPTIONAL CLEANUP
Delete this junk test file once convenient:
- `docs/CHATGPT_WRITE_TEST.txt`

## 5. WHAT THIS DOES NOT FINISH YET
This bootstrap patch does NOT complete:
- final custom layouts/art
- final trainer data
- full Shadow system persistence
- final travel UI integration
- final Poryscript compile path
- final map warps and polished cutscene flow

It DOES finish the first repo-layer bootstrap needed so the Colosseum slice is no longer just loose files.
