#include "TurnLimitSound.h"

FTurnLimitSound::FTurnLimitSound() {
    this->AKEvent = NULL;
    this->TriggerTime = 0.00f;
    this->Cooldown = 0.00f;
    this->ResetHeldTime = 0.00f;
    this->LastPlayTime = 0.00f;
    this->LastInputTime = 0.00f;
    this->HeldTime = 0.00f;
}

