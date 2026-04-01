# COLOSSEUM CORE BUILD PATCH CHECKLIST

This file shrinks the remaining bootstrap integration down to a few core-file edits.
The new Colosseum source files already exist in the repo.
The engine now only needs the remaining live hook plus a first honest compile pass.

## 1. PATCH `data/specials.inc`
Add this include once after the `def_special` macro section is active:

```asm
	.include "data/scripts/colosseum/colosseum_specials.inc"
```

Recommended placement:
- after the last existing `def_special` block or near other custom-system additions
- before the file ends

## 2. DO NOT PATCH `data/event_scripts.s` FOR THIS PASS
The repo already has a standalone Colosseum script spine in:

```asm
	data/colosseum_event_scripts.s
```

That file already includes:

```asm
	.include "data/scripts/colosseum/colosseum_map_scripts.inc"
```

Under the current Makefile, top-level `data/*.s` files are compiled automatically.
So the live bootstrap pass should not need a direct include in `data/event_scripts.s` unless the first real compile proves otherwise.

## 3. `data/maps/map_groups.json` IS ALREADY PATCHED
The Colosseum bootstrap maps are already registered in `gMapGroup_SpecialArea`:
- `OutskirtStand`
- `PhenacCity`
- `PhenacMayorHouse`
- `PhenacStadium`
- `PhenacPokeMart`
- `PrestigePreceptCenter`

## 4. NEXT REAL STEP
Run the first honest compile attempt after the specials hookup.
Then patch only the blockers revealed by the actual build output.

## 5. OPTIONAL CLEANUP
Delete this junk test file once convenient:
- `docs/CHATGPT_WRITE_TEST.txt`

## 6. WHAT THIS STILL DOES NOT FINISH
This bootstrap patch does NOT complete:
- final custom layouts/art
- final trainer data
- full Shadow system persistence
- final travel UI integration
- final Poryscript compile path
- final map warps and polished cutscene flow

It DOES finish the remaining repo-layer hookup needed before the first compile/test pass can give honest blocker feedback.
