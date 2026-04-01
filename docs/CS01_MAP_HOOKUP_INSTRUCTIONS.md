# CONTENT SPRINT 01 - MAP HOOKUP INSTRUCTIONS

This file is the Porymap-side hookup sheet for the slice scripts.

## 1. OUTSKIRT STAND
Assign:
- Willie object -> `OutskirtStand_EventScript_Willie`
- Bartender object -> `OutskirtStand_EventScript_Bartender`
- stand sign / flavor sign -> `OutskirtStand_EventScript_BallSign`
- map scripts label -> `OutskirtStand_MapScripts`

Notes:
- the travel exit itself should remain owned by the existing Sprint 03 travel framework
- do not replace the world-travel exit with a generic door/warp shortcut
- Willie should be placed so the player naturally hits him before feeling done with Outskirt

## 2. PHENAC CITY
Assign:
- sack object -> `PhenacCity_EventScript_Sack`
- return messenger object -> `PhenacCity_EventScript_ReturnFromOutskirt` only as map-driven scene support
- red exit guard object -> `PhenacCity_EventScript_GuardRed`
- blue exit guard object -> `PhenacCity_EventScript_GuardBlue`
- green exit guard object -> `PhenacCity_EventScript_GuardGreen`
- map scripts label -> `PhenacCity_MapScripts`

Visibility rules:
- sack visible only after entrance battle and before Rui is freed
- return messenger visible only for the return-from-Outskirt urgency scene
- exit guards visible only after `FLAG_COLO_CS01_MIROR_B_SCENE_DONE`
- after `FLAG_COLO_CS01_EXIT_GUARD_CLEARED`, guards may remain for flavor or be hidden based on final map read, but must not re-gate departure

Required travel handoff:
- first arrival into Phenac must set `VAR_COLO_CS01_SCENE_REQUEST = COLO_CS01_SCENE_PHENAC_ARRIVAL`
- return from stadium to Phenac must set `VAR_COLO_CS01_SCENE_REQUEST = COLO_CS01_SCENE_SNAGEM_REVEAL`
- return from Outskirt with balls must set `VAR_COLO_CS01_SCENE_REQUEST = COLO_CS01_SCENE_RETURN_FROM_OUTSKIRT`

## 3. PHENAC MAYOR HOUSE
Assign:
- mayor object -> `PhenacMayorHouse_EventScript_Mayor`
- map scripts label -> `PhenacMayorHouse_MapScripts`

Scene setup:
- Miror B., Folly, Trudly, and the three color-coded grunts must exist as map objects or temporary cutscene objects
- the mayor-house invasion should only auto-fire after `FLAG_COLO_CS01_OUTSKIRT_BALLS_RECEIVED`
- do not let the invasion fire during the first mayor visit

## 4. PHENAC STADIUM
Assign:
- front-desk / guide NPC -> `PhenacStadium_EventScript_Guide`
- map scripts label -> `PhenacStadium_MapScripts`

Rule:
- this map exists for the stadium check leads nowhere useful beat
- do not expand it into later Phenac Stadium challenge content inside CS01

## 5. PHENAC POKE MART
Assign:
- downstairs clerk -> `PhenacPokeMart_EventScript_Clerk`
- upstairs hint NPC -> `PhenacPokeMart_EventScript_HintNpc`
- map scripts label -> `PhenacPokeMart_MapScripts`

Rule:
- the downstairs clerk must deny Poke Ball purchase
- the upstairs hint NPC must point to Outskirt Stand

## 6. PRESTIGE PRECEPT CENTER
Assign:
- teacher -> `PrestigePreceptCenter_EventScript_Teacher`
- Justy -> `PrestigePreceptCenter_EventScript_Justy`
- map scripts label -> `PrestigePreceptCenter_MapScripts`

Rule:
- teacher is the only story-critical authored content here for CS01
- the full junior-trainer gauntlet is intentionally deferred

## 7. TRAINER DATA EXPECTATIONS
These scripts expect the following trainer symbols to exist:
- `TRAINER_COLO_RIDER_WILLIE`
- `TRAINER_COLO_SHADY_GUYS_FOLLY_TRUDLY_ENTRANCE`
- `TRAINER_COLO_TEAM_SNAGEM_WAKIN`
- `TRAINER_COLO_MIROR_B_PEON_FOLLY_MAYOR_HOUSE`
- `TRAINER_COLO_MIROR_B_PEON_TRUDLY_MAYOR_HOUSE`
- `TRAINER_COLO_MYSTERY_TROOP_VERDE`
- `TRAINER_COLO_MYSTERY_TROOP_BLUNO`
- `TRAINER_COLO_MYSTERY_TROOP_ROSSO`

If the live repo already named these differently, keep the canonical trainer identities but remap the symbol names only.
