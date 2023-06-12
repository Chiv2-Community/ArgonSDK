#include "CarryablePlayerComponent.h"
#include "Net/UnrealNetwork.h"

void UCarryablePlayerComponent::StartPickup() {
}

void UCarryablePlayerComponent::OnUseReleased(APawn* Pawn, float UseTime) {
}

void UCarryablePlayerComponent::OnUseHeld(APawn* Pawn, float UseTime, UInteractableComponent* Interactable) {
}

void UCarryablePlayerComponent::OnUse(APawn* Pawn, UInteractableComponent* Interactable) {
}

void UCarryablePlayerComponent::OnThrown(AInventoryItem* Item, ATBLCharacter* Character, FTransform Transform) {
}

void UCarryablePlayerComponent::OnSpawnFakeClient(AInventoryItem* FakeClient) {
}

void UCarryablePlayerComponent::OnSetAttached(bool bAttached) {
}

void UCarryablePlayerComponent::OnRootTransformUpdated() {
}

void UCarryablePlayerComponent::OnRep_CarryableItem() {
}

void UCarryablePlayerComponent::OnPreThrown(AInventoryItem* Item, ATBLCharacter* Character, FTransform Transform) {
}

void UCarryablePlayerComponent::OnInteractableEnabled(bool bEnabled) {
}

void UCarryablePlayerComponent::OnFakeClientProjectileHit(const FProjectileHitParams& HitParams) {
}

void UCarryablePlayerComponent::OnDropped(AInventoryItem* Item, ATBLCharacter* Character, FTransform Transform) {
}

void UCarryablePlayerComponent::OnCharacterKilled(const FDeathDamageTakenEvent& Event) {
}

void UCarryablePlayerComponent::OnCharacterDestroyed(AActor* Actor) {
}

void UCarryablePlayerComponent::OnCarryableItemDestroyed(AActor* Actor) {
}

void UCarryablePlayerComponent::OnCarryableAnimationEvent(FName EventName) {
}

bool UCarryablePlayerComponent::CanPickup(APawn* Pawn) {
    return false;
}

void UCarryablePlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCarryablePlayerComponent, CarryableItem);
}

UCarryablePlayerComponent::UCarryablePlayerComponent() {
    this->CarryableItemClass = NULL;
    this->RelativeLandingYawOffset = 0.00f;
    this->YawRotationLimit = 90.00f;
    this->bCanPickupFromDowned = false;
    this->bCanKillOnThrow = true;
    this->bCanRevive = false;
    this->OwnerCharacter = NULL;
    this->ParentCharacter = NULL;
    this->InteractableComponent = NULL;
    this->HorizLockId = -1;
    this->bIsBeingHeld = false;
    this->bHeldByEnemy = false;
    this->bWasThrown = false;
    this->bOnRootTransformUpdate = false;
    this->bUsedFakedClientThrow = false;
    this->bUsedFakedClientDrop = false;
    this->bCachedRVOEnabled = false;
}

