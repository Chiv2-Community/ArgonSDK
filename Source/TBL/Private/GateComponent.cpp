#include "GateComponent.h"
#include "Net/UnrealNetwork.h"

void UGateComponent::SetIsGateOpened(bool InGateOpened) {
}

void UGateComponent::OnRep_IsGateOpened() {
}

bool UGateComponent::GetIsGatedOpened() {
    return false;
}

void UGateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGateComponent, IsGateOpened);
}

UGateComponent::UGateComponent() {
}

