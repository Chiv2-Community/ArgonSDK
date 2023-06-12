#include "HorseMovementState.h"


void UHorseMovementState::TurnTowardsCamera(float TurnRate, float TurnRateWithInput) {
}



void UHorseMovementState::ModifyTurnRateScale(float Target, float InterpSpeed) {
}

void UHorseMovementState::ModifyTargetSpeed(float Target) {
}

void UHorseMovementState::ModifyAccelerationScale(float Target, float InterpSpeed) {
}



float UHorseMovementState::GetSpeed(FName State, float Percent) {
    return 0.0f;
}

float UHorseMovementState::GetSettleSpeed(FName State) {
    return 0.0f;
}


float UHorseMovementState::GetMinSpeed(FName State) {
    return 0.0f;
}

float UHorseMovementState::GetMaxSpeed(FName State) {
    return 0.0f;
}

bool UHorseMovementState::GetInvertedBackwardStrafe() {
    return false;
}

void UHorseMovementState::GetInputTurn(float& InputTurn, float& HeldTime) {
}

void UHorseMovementState::GetInputStrafe(float& InputStrafe, float& HeldTime) {
}

void UHorseMovementState::GetInputForward(float& InputForwardOut, float& HeldTime) {
}

void UHorseMovementState::GetInputDirection(EHorseMovementInput& Direction, float& HeldTime) {
}

UHorseMovement* UHorseMovementState::GetHorseMovement() {
    return NULL;
}

float UHorseMovementState::GetCurrentForwardSpeed() {
    return 0.0f;
}

float UHorseMovementState::GetCrusingSpeed() {
    return 0.0f;
}

bool UHorseMovementState::GetControlMode() {
    return false;
}

bool UHorseMovementState::GetBoostMode() {
    return false;
}



UHorseMovementState::UHorseMovementState() {
    this->movement = NULL;
}

