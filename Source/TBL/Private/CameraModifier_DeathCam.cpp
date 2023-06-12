#include "CameraModifier_DeathCam.h"

void UCameraModifier_DeathCam::UpdateOnCinematicStateChanged(FGameplayTag PreviousStateTag, UCinematicState* PreviousState, FGameplayTag NewStateTag, UCinematicState* NewState) {
}

UCameraModifier_DeathCam::UCameraModifier_DeathCam() {
    this->KilledCharacter = NULL;
    this->CurrentDurationTime = 0.00f;
    this->PanOutDurationTime = 0.00f;
    this->CurrentDistance = 0.00f;
    this->bWasBlocked = false;
    this->bUseImmediateSettings = false;
}

