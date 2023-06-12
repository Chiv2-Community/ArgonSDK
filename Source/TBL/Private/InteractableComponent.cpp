#include "InteractableComponent.h"
#include "Net/UnrealNetwork.h"

void UInteractableComponent::Use(APawn* Pawn) {
}

void UInteractableComponent::StopRechargeTimer() {
}

void UInteractableComponent::SetUseableByTeam(EFaction EFaction) {
}

void UInteractableComponent::SetRechargeRule(EInteractableRechargeRule InRechargeRule) {
}

void UInteractableComponent::SetOnlyAllowOwningPlayer(bool bInOnlyAllowOwningPlayer) {
}

void UInteractableComponent::SetInteractionType(EInteractionType InInteractionType) {
}

void UInteractableComponent::SetInitiateUseDuration(float InInitiateUseDuration) {
}

void UInteractableComponent::SetEnabled(bool Enabled, bool bForceClient) {
}

void UInteractableComponent::RestartRechargeTimer() {
}

void UInteractableComponent::OnRep_Uses() {
}

void UInteractableComponent::OnRep_RechargeRule() {
}

void UInteractableComponent::OnRep_InteractionType() {
}

void UInteractableComponent::OnRep_InitiateUseDuration() {
}

void UInteractableComponent::OnRep_Enabled() {
}

void UInteractableComponent::OnRep_CurrentUsingPawn() {
}

bool UInteractableComponent::IsValidCollisionComponent(UPrimitiveComponent* Component) {
    return false;
}

TArray<UPrimitiveComponent*> UInteractableComponent::GetValidCollisionComponents() const {
    return TArray<UPrimitiveComponent*>();
}

int32 UInteractableComponent::GetUses() {
    return 0;
}

EFaction UInteractableComponent::GetUseableByTeam() {
    return EFaction::Agatha;
}

EInteractableRechargeRule UInteractableComponent::GetRechargeRule() {
    return EInteractableRechargeRule::RechargeWhenBelowMaxUses;
}

EInteractionType UInteractableComponent::GetInteractionType() {
    return EInteractionType::Instant;
}

UInteractableComponent* UInteractableComponent::GetInteractableComponent() {
    return NULL;
}

bool UInteractableComponent::GetEnabled() {
    return false;
}

bool UInteractableComponent::CanShowUI(APawn* Pawn) const {
    return false;
}

void UInteractableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInteractableComponent, CurrentUsingPawn);
    DOREPLIFETIME(UInteractableComponent, Uses);
    DOREPLIFETIME(UInteractableComponent, ReplicatedRechargeRule);
    DOREPLIFETIME(UInteractableComponent, ReplicatedInteractionType);
    DOREPLIFETIME(UInteractableComponent, bOnlyAllowOwningPlayer);
    DOREPLIFETIME(UInteractableComponent, UseableByTeam);
    DOREPLIFETIME(UInteractableComponent, ReplicatedInitiateUseDuration);
    DOREPLIFETIME(UInteractableComponent, bEnabled);
}

UInteractableComponent::UInteractableComponent() {
    this->OverrideInteractable = NULL;
    this->UsingPawn = NULL;
    this->InitialUses = -1;
    this->bAllowProximityCheck = false;
    this->MaxUses = 0;
    this->UseRechargeTime = 0.00f;
    this->RechargeStacks = 0;
    this->RechargeRule = EInteractableRechargeRule::RechargeWhenBelowMaxUses;
    this->InteractionType = EInteractionType::Instant;
    this->KeyBind = TEXT("Use");
    this->UILocation = EInteractableUILocation::Pinned;
    this->AllowedTeam = EFaction::All;
    this->bOnlyAllowOwningPlayer = false;
    this->bCheckValidEquipState = false;
    this->InteractCombatState = EInteractCombatState::Interact;
    this->InitiateUseDuration = 0.00f;
    this->DecayRate = 1.00f;
    this->Cooldown = 0.00f;
    this->CurrentCooldownTime = 0.00f;
    this->bOnCooldown = false;
    this->CurrentUseTime = 0.00f;
    this->bIsUseHeld = false;
    this->ItemRequiredToUse = NULL;
    this->CharacterClassRequiredToUse = NULL;
    this->bShouldHaveHudMarker = true;
    this->bAutoPickupOnly = false;
    this->bHideInteractablePrompt = false;
}

