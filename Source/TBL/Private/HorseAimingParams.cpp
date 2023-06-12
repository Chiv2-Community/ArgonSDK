#include "HorseAimingParams.h"

FHorseAimingParams::FHorseAimingParams() {
    this->TransitionTime = 0.00f;
    this->WindupCorridorHorizontalMin = 0.00f;
    this->WindupCorridorHorizontalMax = 0.00f;
    this->WindupCorridorVerticalMin = 0.00f;
    this->WindupCorridorVerticalMax = 0.00f;
    this->ReleaseCorridorHorizontalMin = 0.00f;
    this->ReleaseCorridorHorizontalMax = 0.00f;
    this->ReleaseCorridorVerticalMin = 0.00f;
    this->ReleaseCorridorVerticalMax = 0.00f;
    this->CameraAccelerationDecoupledSwing = NULL;
    this->CorridorOffsetWindupForwardSlow = 0.00f;
    this->CorridorOffsetWindupForwardMedium = 0.00f;
    this->CorridorOffsetWindupForwardFast = 0.00f;
    this->CorridorOffsetWindupBackwards = 0.00f;
    this->CorridorOffsetWindupStrafe = 0.00f;
    this->CorridorOffsetReleaseForwardSlow = 0.00f;
    this->CorridorOffsetReleaseForwardMedium = 0.00f;
    this->CorridorOffsetReleaseForwardFast = 0.00f;
    this->CorridorOffsetReleaseBackwards = 0.00f;
    this->CorridorOffsetReleaseStrafe = 0.00f;
    this->CorridorOffsetMediumSpeed = 0.00f;
    this->CorridorOffsetFastSpeed = 0.00f;
    this->WindupInterpSpeed = 0.00f;
    this->ReleaseInterpSpeed = 0.00f;
    this->RecoveryInterpSpeed = 0.00f;
    this->CorridorOffsetInterpSpeed = 0.00f;
    this->bCanSwitchAttackDirection = false;
    this->bCanCancelAttack = false;
    this->SwitchAttackDirectionOffset = 0.00f;
    this->SwitchAttackDirectionInterpSpeed = 0.00f;
    this->bEnableHorseAimingForSpecificAttackTypes = false;
}

