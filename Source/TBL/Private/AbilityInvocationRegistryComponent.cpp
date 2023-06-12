#include "AbilityInvocationRegistryComponent.h"

void UAbilityInvocationRegistryComponent::ClientTargetMethodEvent_Implementation(int32 InvocationId, FName TargetMethodName, TEnumAsByte<ETargetMethodEvent::Type> Event, FVector Location, const TArray<AActor*>& HitTargets) {
}

void UAbilityInvocationRegistryComponent::ClientAbilityError_Implementation(int32 InvocationId, FResult Error) {
}

UAbilityInvocationRegistryComponent::UAbilityInvocationRegistryComponent() {
}

