#include "LadderState.h"

FLadderState::FLadderState() {
    this->Ladder = NULL;
    this->HorizLockId = 0;
    this->ClientTimeStamp = 0.00f;
    this->bFromTop = false;
    this->bRightHand = false;
    this->bDirectionUp = false;
    this->bForceUpNextAnimation = false;
    this->bPreviousRightHand = false;
    this->bMounting = false;
    this->bDismounting = false;
    this->bLadderAnimationEnded = false;
    this->DebugLadder = NULL;
}

