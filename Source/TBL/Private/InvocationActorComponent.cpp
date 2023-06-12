#include "InvocationActorComponent.h"
#include "Net/UnrealNetwork.h"

void UInvocationActorComponent::OnRep_Info() {
}

void UInvocationActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInvocationActorComponent, Info);
}

UInvocationActorComponent::UInvocationActorComponent() {
}

