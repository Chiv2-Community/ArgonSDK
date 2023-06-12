#include "HorseMovementDebugFrame.h"

FHorseMovementDebugFrame::FHorseMovementDebugFrame() {
    this->bIsValid = false;
    this->InputForward = 0.00f;
    this->InputStrafe = 0.00f;
    this->InputTurn = 0.00f;
    this->InputDirection = 0;
    this->ForwardSpeed = 0.00f;
    this->ForwardAccel = 0.00f;
    this->StrafeSpeed = 0.00f;
    this->StrafeAccel = 0.00f;
    this->TurnRate = 0.00f;
    this->TurnRateAccel = 0.00f;
    this->MovementModifier = 0.00f;
    this->ControlMode = 0;
    this->BoostMode = 0;
    this->TargetSpeed = 0.00f;
    this->AccelerationScale = 0.00f;
    this->TurnRateScale = 0.00f;
    this->bGallopExhausted = 0;
    this->bEmergencyBrakeExhausted = 0;
}

