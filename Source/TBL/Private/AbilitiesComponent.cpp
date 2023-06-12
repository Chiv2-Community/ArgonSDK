#include "AbilitiesComponent.h"

FResult UAbilitiesComponent::TerminateAbility(UAbilitySpec* Spec) {
    return FResult{};
}

void UAbilitiesComponent::SyncServerInitiateAbility(const FServerInitiateAbilityParams& Params) {
}

void UAbilitiesComponent::ServerTerminateAbility_Implementation(UAbilitySpec* AbilitySpec) {
}
bool UAbilitiesComponent::ServerTerminateAbility_Validate(UAbilitySpec* AbilitySpec) {
    return true;
}

void UAbilitiesComponent::ServerInitiateAbility_Implementation(const FServerInitiateAbilityParams& Params) {
}
bool UAbilitiesComponent::ServerInitiateAbility_Validate(const FServerInitiateAbilityParams& Params) {
    return true;
}

void UAbilitiesComponent::ServerCombatStateStartAttack_Implementation(UAbilitySpec* AbilitySpec, const FCombatStateStartAttack& Params) {
}
bool UAbilitiesComponent::ServerCombatStateStartAttack_Validate(UAbilitySpec* AbilitySpec, const FCombatStateStartAttack& Params) {
    return true;
}

void UAbilitiesComponent::RemoveInvocationActor(UAbilitySpec* AbilitySpec, TEnumAsByte<EInvocationScope::Type> Scope, AActor* Actor) {
}

void UAbilitiesComponent::OnInvocationComplete(AAbilityInvocation* Invocation, UAbilitySpec* AbilitySpec) {
}

FResult UAbilitiesComponent::InitiateAbility(UAbilitySpec* Spec, FAbilityInitiationParams InitiationParams) {
    return FResult{};
}

FAbility UAbilitiesComponent::GetAbility(UAbilitySpec* Spec) {
    return FAbility{};
}

void UAbilitiesComponent::ClientStartTargetMethodCosmetic_Implementation(UAbilitySpec* AbilitySpec, int32 InvocationId, FAbilityInitiationParams InitiationParams, UAbilityTargetMethod* TargetMethod) {
}

void UAbilitiesComponent::ClientSpamTest_Implementation(const FString& Payload) {
}

void UAbilitiesComponent::ClientAbilityInvocationComplete_Implementation(int32 InvocationId) {
}

void UAbilitiesComponent::ClientAbilityInitiated_Implementation(const FClientAbilityInitiationParams& Params) {
}

FResult UAbilitiesComponent::CanInitiate(UAbilitySpec* Spec) {
    return FResult{};
}

UAbilitiesComponent::UAbilitiesComponent() {
    this->Version = 2;
    this->InitiatingAbility = NULL;
    this->bForceReplicated = false;
}

