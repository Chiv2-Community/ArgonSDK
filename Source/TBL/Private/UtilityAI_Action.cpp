#include "UtilityAI_Action.h"

void UUtilityAI_Action::TickAction_Implementation(float DeltaTime, FUtilityAI_Context C) {
}

bool UUtilityAI_Action::ShouldRestartIfRedecidedUpon() const {
    return false;
}

void UUtilityAI_Action::SetCanInterrupt(bool bInCanInterrupt) {
}

void UUtilityAI_Action::PerformAction_Implementation(const FUtilityAI_Context& C) {
}

void UUtilityAI_Action::MarkReadyToFinish() {
}

void UUtilityAI_Action::MarkFinished() {
}

bool UUtilityAI_Action::IsInProgress() const {
    return false;
}

bool UUtilityAI_Action::IsDoneOrCanInterrupt() const {
    return false;
}

void UUtilityAI_Action::CompleteAction_Implementation(const FUtilityAI_Context& C) {
}

UUtilityAI_Action::UUtilityAI_Action() {
    this->bIsInProgress = false;
    this->bIsReadyToComplete = false;
    this->bCanInterrupt = true;
    this->PriorityLevel = EActionPriorityLevel::Standard;
    this->bLatentAction = false;
    this->bDoNotRestartIfRedecidedUpon = false;
}

