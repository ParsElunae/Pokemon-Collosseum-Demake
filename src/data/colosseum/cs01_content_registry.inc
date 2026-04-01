#ifndef GUARD_CS01_CONTENT_REGISTRY_INC
#define GUARD_CS01_CONTENT_REGISTRY_INC

#include "constants/colosseum_cs01.h"

static const struct ColoContentStepEffect sColoCs01StepEffects[] =
{
    [COLO_CS01_STEP_OPENING_HANDOFF_DONE] =
    {
        .storyArcId = COLO_STORY_ARC_00_OPENING_ESCAPE_OUTSKIRT,
        .setStoryBeatId = COLO_STORY_BEAT_SB_02_FIRST_PLAYABLE_OUTSKIRT,
        .travelUnlock = COLO_CS01_TRAVEL_UNLOCK_NONE,
        .pdaHook = COLO_CS01_PDA_HOOK_NONE,
    },
    [COLO_CS01_STEP_WILLIE_CLEARED] =
    {
        .storyArcId = COLO_STORY_ARC_00_OPENING_ESCAPE_OUTSKIRT,
        .setStoryBeatId = COLO_STORY_BEAT_SB_03_WILLIE_POINTS_TO_PHENAC,
        .travelUnlock = COLO_CS01_TRAVEL_UNLOCK_PHENAC,
        .pdaHook = COLO_CS01_PDA_HOOK_NONE,
    },
    [COLO_CS01_STEP_RUI_JOINED] =
    {
        .storyArcId = COLO_STORY_ARC_01_PHENAC_RESCUE_RUI_JOIN,
        .setStoryBeatId = COLO_STORY_BEAT_SB_04_RUI_FOUND_IN_SACK,
        .travelUnlock = COLO_CS01_TRAVEL_UNLOCK_NONE,
        .pdaHook = COLO_CS01_PDA_HOOK_NONE,
        .activatePartnerRui = TRUE,
    },
    [COLO_CS01_STEP_MAYOR_MET] =
    {
        .storyArcId = COLO_STORY_ARC_01_PHENAC_RESCUE_RUI_JOIN,
        .setStoryBeatId = COLO_STORY_BEAT_SB_05_RUI_PARTNER_ROLE_ACTIVE,
        .travelUnlock = COLO_CS01_TRAVEL_UNLOCK_NONE,
        .pdaHook = COLO_CS01_PDA_HOOK_NONE,
    },
    [COLO_CS01_STEP_STADIUM_CHECK_DONE] =
    {
        .storyArcId = COLO_STORY_ARC_01_PHENAC_RESCUE_RUI_JOIN,
        .travelUnlock = COLO_CS01_TRAVEL_UNLOCK_NONE,
        .pdaHook = COLO_CS01_PDA_HOOK_NONE,
    },
    [COLO_CS01_STEP_SNAGEM_REVEAL_DONE] =
    {
        .storyArcId = COLO_STORY_ARC_01_PHENAC_RESCUE_RUI_JOIN,
        .setStoryBeatId = COLO_STORY_BEAT_SB_06_SNAGEM_RECOGNITION,
        .travelUnlock = COLO_CS01_TRAVEL_UNLOCK_NONE,
        .pdaHook = COLO_CS01_PDA_HOOK_NONE,
    },
    [COLO_CS01_STEP_OUTSKIRT_BALLS_OBTAINED] =
    {
        .storyArcId = COLO_STORY_ARC_01_PHENAC_RESCUE_RUI_JOIN,
        .travelUnlock = COLO_CS01_TRAVEL_UNLOCK_NONE,
        .pdaHook = COLO_CS01_PDA_HOOK_NONE,
    },
    [COLO_CS01_STEP_FIRST_SHADOW_CLEARED] =
    {
        .storyArcId = COLO_STORY_ARC_02_PHENAC_MAYOR_HOUSE_ESCAPE,
        .setStoryBeatId = COLO_STORY_BEAT_SB_07_FIRST_SNAG_ONBOARDING,
        .travelUnlock = COLO_CS01_TRAVEL_UNLOCK_NONE,
        .pdaHook = COLO_CS01_PDA_HOOK_SNAGLIST_MAKUHITA,
    },
    [COLO_CS01_STEP_EXIT_GUARD_CLEARED] =
    {
        .storyArcId = COLO_STORY_ARC_02_PHENAC_MAYOR_HOUSE_ESCAPE,
        .setStoryBeatId = COLO_STORY_BEAT_SB_08_EXIT_GUARD_GATE,
        .travelUnlock = COLO_CS01_TRAVEL_UNLOCK_CONSTRUCTION_LOT,
        .pdaHook = COLO_CS01_PDA_HOOK_NONE,
    },
    [COLO_CS01_STEP_SLICE_COMPLETE] =
    {
        .storyArcId = COLO_STORY_ARC_03_PYRITE_DUKING_CONSTRUCTION,
        .travelUnlock = COLO_CS01_TRAVEL_UNLOCK_NONE,
        .pdaHook = COLO_CS01_PDA_HOOK_NONE,
    },
};

static const struct ColoShadowEncounterHook sColoCs01ShadowHooks[] =
{
    [COLO_CS01_SHADOW_MAKUHITA] =
    {
        .snagId = 1,
        .species = SPECIES_MAKUHITA,
        .sourceTrainer = TRAINER_COLO_MIROR_B_PEON_TRUDLY_MAYOR_HOUSE,
        .firstLocationNode = COLO_TRAVEL_NODE_PHENAC_CITY,
        .scriptBindingMode = COLO_SHADOW_BIND_SCRIPT_SELECTED_BATTLER,
        .defaultPdaHook = COLO_CS01_PDA_HOOK_SNAGLIST_MAKUHITA,
    },
    [COLO_CS01_SHADOW_BAYLEEF] =
    {
        .snagId = 2,
        .species = SPECIES_BAYLEEF,
        .sourceTrainer = TRAINER_COLO_MYSTERY_TROOP_VERDE,
        .firstLocationNode = COLO_TRAVEL_NODE_PHENAC_CITY,
        .scriptBindingMode = COLO_SHADOW_BIND_SCRIPT_SELECTED_BATTLER,
        .defaultPdaHook = COLO_CS01_PDA_HOOK_SNAGLIST_BAYLEEF,
    },
    [COLO_CS01_SHADOW_QUILAVA] =
    {
        .snagId = 3,
        .species = SPECIES_QUILAVA,
        .sourceTrainer = TRAINER_COLO_MYSTERY_TROOP_ROSSO,
        .firstLocationNode = COLO_TRAVEL_NODE_PHENAC_CITY,
        .scriptBindingMode = COLO_SHADOW_BIND_SCRIPT_SELECTED_BATTLER,
        .defaultPdaHook = COLO_CS01_PDA_HOOK_SNAGLIST_QUILAVA,
    },
    [COLO_CS01_SHADOW_CROCONAW] =
    {
        .snagId = 4,
        .species = SPECIES_CROCONAW,
        .sourceTrainer = TRAINER_COLO_MYSTERY_TROOP_BLUNO,
        .firstLocationNode = COLO_TRAVEL_NODE_PHENAC_CITY,
        .scriptBindingMode = COLO_SHADOW_BIND_SCRIPT_SELECTED_BATTLER,
        .defaultPdaHook = COLO_CS01_PDA_HOOK_SNAGLIST_CROCONAW,
    },
};

static const struct ColoPdaHookDescriptor sColoCs01PdaHooks[] =
{
    [COLO_CS01_PDA_HOOK_STRATEGY_MEMO_UNLOCK] =
    {
        .hookType = COLO_PDA_HOOK_UNLOCK_PAGE,
        .pageId = COLO_PDA_PAGE_STRATEGY_MEMO,
        .arg0 = TRUE,
    },
    [COLO_CS01_PDA_HOOK_STRATEGY_MEMO_REFRESH] =
    {
        .hookType = COLO_PDA_HOOK_REFRESH_PAGE,
        .pageId = COLO_PDA_PAGE_STRATEGY_MEMO,
        .arg0 = TRUE,
    },
    [COLO_CS01_PDA_HOOK_SNAGLIST_MAKUHITA] =
    {
        .hookType = COLO_PDA_HOOK_SYNC_SNAG_ENTRY,
        .pageId = COLO_PDA_PAGE_SNAG_LIST,
        .arg0 = 1,
    },
    [COLO_CS01_PDA_HOOK_SNAGLIST_BAYLEEF] =
    {
        .hookType = COLO_PDA_HOOK_SYNC_SNAG_ENTRY,
        .pageId = COLO_PDA_PAGE_SNAG_LIST,
        .arg0 = 2,
    },
    [COLO_CS01_PDA_HOOK_SNAGLIST_QUILAVA] =
    {
        .hookType = COLO_PDA_HOOK_SYNC_SNAG_ENTRY,
        .pageId = COLO_PDA_PAGE_SNAG_LIST,
        .arg0 = 3,
    },
    [COLO_CS01_PDA_HOOK_SNAGLIST_CROCONAW] =
    {
        .hookType = COLO_PDA_HOOK_SYNC_SNAG_ENTRY,
        .pageId = COLO_PDA_PAGE_SNAG_LIST,
        .arg0 = 4,
    },
};

static const struct ColoTravelUnlockEffect sColoCs01TravelUnlocks[] =
{
    [COLO_CS01_TRAVEL_UNLOCK_PHENAC] =
    {
        .nodeId = COLO_TRAVEL_NODE_PHENAC_CITY,
        .unlockBehavior = COLO_TRAVEL_UNLOCK_STORY,
    },
    [COLO_CS01_TRAVEL_UNLOCK_CONSTRUCTION_LOT] =
    {
        .nodeId = COLO_TRAVEL_NODE_CONSTRUCTION_LOT,
        .unlockBehavior = COLO_TRAVEL_UNLOCK_STORY,
    },
    [COLO_CS01_TRAVEL_UNLOCK_PYRITE] =
    {
        .nodeId = COLO_TRAVEL_NODE_PYRITE_TOWN,
        .unlockBehavior = COLO_TRAVEL_UNLOCK_STORY,
    },
};

#endif
