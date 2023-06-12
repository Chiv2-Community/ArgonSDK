#include "NPCReplicatedDataComponent.h"
#include "Net/UnrealNetwork.h"

void UNPCReplicatedDataComponent::SetIsScared(bool InIsScared) {
}

void UNPCReplicatedDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UNPCReplicatedDataComponent, bIsScared);
}

UNPCReplicatedDataComponent::UNPCReplicatedDataComponent() {
    this->bIsScared = false;
}

