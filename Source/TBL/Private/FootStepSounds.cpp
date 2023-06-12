#include "FootStepSounds.h"

FFootStepSounds::FFootStepSounds() {
    this->LeftFootCurve = NULL;
    this->RightFootCurve = NULL;
    this->FootStepTrigger = 0.00f;
    this->CrouchTriggerScale = 0.00f;
    this->MinSpeed = 0.00f;
    this->TimerSpeed_Default = 0.00f;
    this->TimerSpeed_Sprint = 0.00f;
    this->TimerSpeed_Crouch = 0.00f;
    this->LeftCurveValue = 0.00f;
    this->RightCurveValue = 0.00f;
    this->Timer = 0.00f;
    this->TimerSpeed = 0.00f;
    this->LeftFootStepTriggered = false;
    this->RightFootStepTriggered = false;
}

