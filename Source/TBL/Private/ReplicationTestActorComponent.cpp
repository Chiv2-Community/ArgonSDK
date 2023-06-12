#include "ReplicationTestActorComponent.h"
#include "Net/UnrealNetwork.h"

void UReplicationTestActorComponent::SetVisible(bool Vis) {
}

void UReplicationTestActorComponent::OnRep_TestVisibleEngine() {
}

void UReplicationTestActorComponent::OnRep_TestVisible() {
}

void UReplicationTestActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReplicationTestActorComponent, TestVisible);
    DOREPLIFETIME(UReplicationTestActorComponent, TestVisibleEngine);
}

UReplicationTestActorComponent::UReplicationTestActorComponent() {
    this->StartTestVisible = false;
    this->bBroadcastSetVariableOnlyOnAuthority = false;
    this->TestVisibleEngine = false;
}

