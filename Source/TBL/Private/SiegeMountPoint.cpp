#include "SiegeMountPoint.h"

void USiegeMountPoint::UsePressed(APawn* InPawn, UInteractableComponent* InInteractable) {
}

void USiegeMountPoint::UpdateInterpToMountLocation(float DeltaSeconds) {
}

void USiegeMountPoint::SetInteractableComponent(UInteractableComponent* Interactable) {
}

void USiegeMountPoint::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState) {
}

void USiegeMountPoint::OnCharacterKilledDuringInterp(const FDeathDamageTakenEvent& DamageEvent) {
}

void USiegeMountPoint::OnCharacterKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

void USiegeMountPoint::DismountPressed() {
}

bool USiegeMountPoint::CanMount(APawn* Pawn) {
    return false;
}

void USiegeMountPoint::BroadcastPendingSpawn_Implementation(bool bNewPendingSpawn) {
}

void USiegeMountPoint::BroadcastInterpToMountLocation_Implementation(ATBLCharacter* Character) {
}

void USiegeMountPoint::BroadcastDismount_Implementation(EDismountType DismountType) {
}

USiegeMountPoint::USiegeMountPoint() {
    this->SiegeInventoryItemClass = NULL;
    this->CameraYawRotationLimit = 0.00f;
    this->CameraPitchRotationLimit = 0.00f;
    this->MaxMountDistance = 0.00f;
    this->MaxMountAngle = 0.00f;
    this->MaxMountAngleOffset = 0.00f;
    this->CharacterAnimationSet = NULL;
    this->CharacterAnimationSet1P = NULL;
    this->bCanDismount = true;
    this->MountedCharacter = NULL;
    this->SiegeInventoryItem = NULL;
    this->HorizLockId = 0;
    this->VertLockId = 0;
    this->bUseMountCombatState = false;
    this->bPendingSpawn = false;
}

