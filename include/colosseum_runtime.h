#ifndef GUARD_COLOSSEUM_RUNTIME_H
#define GUARD_COLOSSEUM_RUNTIME_H

#include "global.h"

void ColoContent_ApplyStep(void);
void ColoShadow_QueueEncounterHook(void);
void ColoPda_ApplyHookFromVar(void);
bool8 ColoRuntime_IsTravelUnlocked(u16 unlockId);

#endif // GUARD_COLOSSEUM_RUNTIME_H
