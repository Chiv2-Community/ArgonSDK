#include "ConditionsComponent.h"
#include "Net/UnrealNetwork.h"

void UConditionsComponent::SetDownedScore(float Score) {
}

void UConditionsComponent::ServerGetUpFromDowned_Implementation() {
}
bool UConditionsComponent::ServerGetUpFromDowned_Validate() {
    return true;
}

void UConditionsComponent::Revive(ATBLCharacter* RevivedBy) {
}

void UConditionsComponent::ReplicateConditions() {
}

void UConditionsComponent::RemoveCondition(EConditionType Condition, bool bClearStacks, AActor* ConditionRemover) {
}

void UConditionsComponent::OnRep_DownedScore() {
}

void UConditionsComponent::OnRep_Conditions() {
}

void UConditionsComponent::OnDownedDamageCaused(const FDamageTakenEvent& Event) {
}

bool UConditionsComponent::HasCondition(EConditionType Condition) const {
    return false;
}

void UConditionsComponent::HandleOwnerUsed(APawn* UsedBy, UInteractableComponent* InteractableComponent) {
}

void UConditionsComponent::HandleOwnerPreBroadcastDamage(const FDamageTakenEvent& DamageTakenEvent) {
}

void UConditionsComponent::HandleOwnerDamageTaken(const FDamageTakenEvent& Event) {
}

void UConditionsComponent::GetUpFromDowned() {
}

float UConditionsComponent::GetMaxDownedScore() const {
    return 0.0f;
}

float UConditionsComponent::GetDownedTime() const {
    return 0.0f;
}

float UConditionsComponent::GetDownedScorePercent() const {
    return 0.0f;
}

float UConditionsComponent::GetDownedScore() const {
    return 0.0f;
}

bool UConditionsComponent::GetDownedCanGetUp() const {
    return false;
}

void UConditionsComponent::ApplyCondition(EConditionType Condition, AActor* DamageCauser, UDamageSource* DamageSource) {
}

void UConditionsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UConditionsComponent, ReplicatedConditions);
    DOREPLIFETIME(UConditionsComponent, TotalBurnTime);
    DOREPLIFETIME(UConditionsComponent, TotalOnFireTime);
    DOREPLIFETIME(UConditionsComponent, ReplicatedDownedScore);
    DOREPLIFETIME(UConditionsComponent, bDownedCanGetup);
}

UConditionsComponent::UConditionsComponent() {
    this->ConditionsSpec = NULL;
    this->DownedTurnRateId = 0;
    this->NumTimesDowned = 0;
    this->NumTimesCrippled = 0;
    this->BleedingTicks = 0;
    this->BurningTicks = 0;
    this->OnFireTicks = 0;
    this->DownedScore = 0.00f;
    this->MaxDownedScore = 100.00f;
}

