#include "global.h"
#include "event_data.h"
#include "script.h"
#include "constants/flags.h"
#include "constants/vars.h"
#include "constants/colosseum_cs01.h"

#define FLAG_COLO_TRAVEL_UNLOCK_PHENAC            FLAG_TEMP_13
#define FLAG_COLO_TRAVEL_UNLOCK_CONSTRUCTION_LOT  FLAG_TEMP_14
#define FLAG_COLO_TRAVEL_UNLOCK_PYRITE            FLAG_TEMP_15

static void ColoRuntime_ApplyTravelUnlock(u16 unlockId)
{
    switch (unlockId)
    {
    case COLO_CS01_TRAVEL_UNLOCK_PHENAC:
        FlagSet(FLAG_COLO_TRAVEL_UNLOCK_PHENAC);
        break;
    case COLO_CS01_TRAVEL_UNLOCK_CONSTRUCTION_LOT:
        FlagSet(FLAG_COLO_TRAVEL_UNLOCK_CONSTRUCTION_LOT);
        break;
    case COLO_CS01_TRAVEL_UNLOCK_PYRITE:
        FlagSet(FLAG_COLO_TRAVEL_UNLOCK_PYRITE);
        break;
    }
}

void ColoContent_ApplyStep(void)
{
    const u16 step = VarGet(VAR_COLO_CS01_CONTENT_STEP);

    switch (step)
    {
    case COLO_CS01_STEP_OPENING_HANDOFF_DONE:
        break;
    case COLO_CS01_STEP_WILLIE_CLEARED:
        ColoRuntime_ApplyTravelUnlock(COLO_CS01_TRAVEL_UNLOCK_PHENAC);
        break;
    case COLO_CS01_STEP_RUI_JOINED:
        FlagSet(FLAG_COLO_CS01_RUI_FREED);
        break;
    case COLO_CS01_STEP_MAYOR_MET:
        FlagSet(FLAG_COLO_CS01_MAYOR_MET);
        break;
    case COLO_CS01_STEP_STADIUM_CHECK_DONE:
        FlagSet(FLAG_COLO_CS01_STADIUM_CHECK_DONE);
        break;
    case COLO_CS01_STEP_SNAGEM_REVEAL_DONE:
        FlagSet(FLAG_COLO_CS01_SNAGEM_REVEAL_DONE);
        break;
    case COLO_CS01_STEP_OUTSKIRT_BALLS_OBTAINED:
        FlagSet(FLAG_COLO_CS01_OUTSKIRT_BALLS_RECEIVED);
        break;
    case COLO_CS01_STEP_FIRST_SHADOW_CLEARED:
        FlagSet(FLAG_COLO_CS01_FIRST_SHADOW_CLEARED);
        break;
    case COLO_CS01_STEP_EXIT_GUARD_CLEARED:
        FlagSet(FLAG_COLO_CS01_EXIT_GUARD_CLEARED);
        ColoRuntime_ApplyTravelUnlock(COLO_CS01_TRAVEL_UNLOCK_CONSTRUCTION_LOT);
        break;
    case COLO_CS01_STEP_SLICE_COMPLETE:
        FlagSet(FLAG_COLO_CS01_SLICE_COMPLETE);
        break;
    }

    gSpecialVar_Result = TRUE;
}

void ColoShadow_QueueEncounterHook(void)
{
    // Bootstrap stub for the first repo application pass.
    // The selected hook ID is already stored in VAR_COLO_CS01_SHADOW_HOOK.
    // Full Shadow roster/persistence code will replace this stub.
    gSpecialVar_Result = VarGet(VAR_COLO_CS01_SHADOW_HOOK);
}

void ColoPda_ApplyHookFromVar(void)
{
    const u16 hookId = VarGet(VAR_COLO_CS01_PDA_HOOK);

    if (hookId == COLO_CS01_PDA_HOOK_STRATEGY_MEMO_UNLOCK
     || hookId == COLO_CS01_PDA_HOOK_STRATEGY_MEMO_REFRESH)
    {
        FlagSet(FLAG_COLO_CS01_STRATEGY_MEMO_UNLOCKED);
    }

    gSpecialVar_Result = hookId;
}

bool8 ColoRuntime_IsTravelUnlocked(u16 unlockId)
{
    switch (unlockId)
    {
    case COLO_CS01_TRAVEL_UNLOCK_PHENAC:
        return FlagGet(FLAG_COLO_TRAVEL_UNLOCK_PHENAC);
    case COLO_CS01_TRAVEL_UNLOCK_CONSTRUCTION_LOT:
        return FlagGet(FLAG_COLO_TRAVEL_UNLOCK_CONSTRUCTION_LOT);
    case COLO_CS01_TRAVEL_UNLOCK_PYRITE:
        return FlagGet(FLAG_COLO_TRAVEL_UNLOCK_PYRITE);
    default:
        return FALSE;
    }
}
