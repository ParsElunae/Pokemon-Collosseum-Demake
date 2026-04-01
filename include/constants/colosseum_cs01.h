#ifndef GUARD_COLOSSEUM_CS01_H
#define GUARD_COLOSSEUM_CS01_H

// ============================================================================
/*
 * CONTENT SPRINT 01 — FAITHFUL PLAYABLE SLICE A
 *
 * This header intentionally only defines slice-local semantic IDs.
 * It does NOT allocate raw saveblock storage or global engine constants.
 * Wire these IDs into the existing story/travel/pda/shadow systems from the
 * accepted implementation sprints.
 */
// ============================================================================

enum ColoCs01ContentStep
{
    COLO_CS01_STEP_NONE = 0,
    COLO_CS01_STEP_OPENING_HANDOFF_DONE,
    COLO_CS01_STEP_WILLIE_CLEARED,
    COLO_CS01_STEP_RUI_JOINED,
    COLO_CS01_STEP_MAYOR_MET,
    COLO_CS01_STEP_STADIUM_CHECK_DONE,
    COLO_CS01_STEP_SNAGEM_REVEAL_DONE,
    COLO_CS01_STEP_OUTSKIRT_BALLS_OBTAINED,
    COLO_CS01_STEP_FIRST_SHADOW_CLEARED,
    COLO_CS01_STEP_EXIT_GUARD_CLEARED,
    COLO_CS01_STEP_SLICE_COMPLETE,
};

enum ColoCs01SceneRequest
{
    COLO_CS01_SCENE_NONE = 0,
    COLO_CS01_SCENE_PHENAC_ARRIVAL,
    COLO_CS01_SCENE_SNAGEM_REVEAL,
    COLO_CS01_SCENE_RETURN_FROM_OUTSKIRT,
};

enum ColoCs01ShadowHookId
{
    COLO_CS01_SHADOW_NONE = 0,
    COLO_CS01_SHADOW_MAKUHITA,
    COLO_CS01_SHADOW_BAYLEEF,
    COLO_CS01_SHADOW_QUILAVA,
    COLO_CS01_SHADOW_CROCONAW,
};

enum ColoCs01PdaHookId
{
    COLO_CS01_PDA_HOOK_NONE = 0,
    COLO_CS01_PDA_HOOK_STRATEGY_MEMO_UNLOCK,
    COLO_CS01_PDA_HOOK_STRATEGY_MEMO_REFRESH,
    COLO_CS01_PDA_HOOK_SNAGLIST_MAKUHITA,
    COLO_CS01_PDA_HOOK_SNAGLIST_BAYLEEF,
    COLO_CS01_PDA_HOOK_SNAGLIST_QUILAVA,
    COLO_CS01_PDA_HOOK_SNAGLIST_CROCONAW,
};

enum ColoCs01TravelUnlockId
{
    COLO_CS01_TRAVEL_UNLOCK_NONE = 0,
    COLO_CS01_TRAVEL_UNLOCK_PHENAC,
    COLO_CS01_TRAVEL_UNLOCK_CONSTRUCTION_LOT,
    COLO_CS01_TRAVEL_UNLOCK_PYRITE,
};

// Slice-local script variable expectations.
// Map these symbols to the project's live var/flag allocation block.
#define VAR_COLO_CS01_SCENE_REQUEST         VAR_TEMP_E
#define VAR_COLO_CS01_CONTENT_STEP          VAR_TEMP_F
#define VAR_COLO_CS01_SHADOW_HOOK           VAR_TEMP_0
#define VAR_COLO_CS01_PDA_HOOK              VAR_TEMP_1
#define VAR_COLO_CS01_TRAVEL_UNLOCK         VAR_TEMP_2

// Slice-local flags expected to be assigned in the project's existing flag space.
// These names should be inserted into the main project constants allocator.
#define FLAG_COLO_CS01_WILLIE_CLEARED               FLAG_TEMP_1
#define FLAG_COLO_CS01_RUI_FREED                    FLAG_TEMP_2
#define FLAG_COLO_CS01_MAYOR_MET                    FLAG_TEMP_3
#define FLAG_COLO_CS01_STADIUM_CHECK_DONE           FLAG_TEMP_4
#define FLAG_COLO_CS01_SNAGEM_REVEAL_DONE           FLAG_TEMP_5
#define FLAG_COLO_CS01_BALL_HINT_HEARD              FLAG_TEMP_6
#define FLAG_COLO_CS01_OUTSKIRT_BALLS_RECEIVED      FLAG_TEMP_7
#define FLAG_COLO_CS01_MIROR_B_SCENE_DONE           FLAG_TEMP_8
#define FLAG_COLO_CS01_FIRST_SHADOW_CLEARED         FLAG_TEMP_9
#define FLAG_COLO_CS01_EXIT_GUARD_CLEARED           FLAG_TEMP_10
#define FLAG_COLO_CS01_STRATEGY_MEMO_UNLOCKED       FLAG_TEMP_11
#define FLAG_COLO_CS01_SLICE_COMPLETE               FLAG_TEMP_12

#endif // GUARD_COLOSSEUM_CS01_H
