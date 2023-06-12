#include "TurnLockState.h"

FTurnLockState::FTurnLockState() {
    this->bEnabled = false;
    this->bBotEnabled = false;
    this->HorizLockId = 0;
    this->VertLockId = 0;
}

