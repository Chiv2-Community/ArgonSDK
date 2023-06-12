#include "CombatStateQueue.h"

void UCombatStateQueue::TryCancelAttack() {
}

void UCombatStateQueue::ServerRemoveHeldInput_Implementation(FName InputActionName) {
}
bool UCombatStateQueue::ServerRemoveHeldInput_Validate(FName InputActionName) {
    return true;
}

void UCombatStateQueue::ServerQueueParry_Implementation() {
}
bool UCombatStateQueue::ServerQueueParry_Validate() {
    return true;
}

void UCombatStateQueue::ServerQueueInput_Implementation(FName NewQueuedInput) {
}
bool UCombatStateQueue::ServerQueueInput_Validate(FName NewQueuedInput) {
    return true;
}

void UCombatStateQueue::ServerAddHeldInput_Implementation(FName InputActionName) {
}
bool UCombatStateQueue::ServerAddHeldInput_Validate(FName InputActionName) {
    return true;
}

void UCombatStateQueue::QueueFeint(FName FeintAttack) {
}

void UCombatStateQueue::OnShowInGameMenu() {
}

void UCombatStateQueue::OnFeintQueueTimeout(float OverTime) {
}

void UCombatStateQueue::OnComboCancelTimeout(float OverTime) {
}

void UCombatStateQueue::OnCancelGamepadTimeout(float OverTime) {
}

void UCombatStateQueue::ClearHeldAttackQueue() {
}

UCombatStateQueue::UCombatStateQueue() {
    this->CombatStateComponent = NULL;
    this->CombatStateSynchronization = NULL;
    this->EarlyBlockStates.AddDefaulted(4);
    this->ParryCounterQueueStates.AddDefaulted(9);
    this->SendHeldInputToServer.AddDefaulted(1);
    this->PendingAttackId = -1;
    this->bHoldAttack = false;
    this->HoldAttackQueueTime = 0.00f;
    this->GamepadReloadPressedStartTime = 0.00f;
    this->bAltAttack = false;
    this->bToggleAlt = false;
    this->bFocusHeld = false;
    this->bFocusAttackHeld = false;
    this->LastAltAttackPressedTime = 0.00f;
    this->LastAltAttackTime = 0.00f;
    this->TimeSinceLastQueuedAttack = 0.00f;
    this->CancelAttackPressedTime = 0.00f;
    this->CancelIntoParryPressedTime = 0.00f;
    this->bIsCancelAttackKeyDown = false;
    this->bIsCancelIntoParryKeyDown = false;
    this->bIsCancelGamepadKeyDown = false;
    this->bIsParryGamepadKeyDown = false;
    this->bCanFeintSameAttackOnGamepad = false;
    this->ComboCancelTime = 0.00f;
    this->ComboCancelTimer = -1;
    this->bShouldComboCancelQueue = false;
    this->FeintQueueTimer = -1;
    this->CancelGamepadTimer = -1;
    this->bFeintQueued = false;
    this->bParryQueued = false;
    this->bQueueHeldInputs = false;
    this->bDisableThrow = false;
    this->bDisableSpecial = false;
}

