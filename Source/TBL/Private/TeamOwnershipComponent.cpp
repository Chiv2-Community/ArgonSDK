#include "TeamOwnershipComponent.h"
#include "Net/UnrealNetwork.h"

void UTeamOwnershipComponent::SetOwnerTeam(ATBLTeam* Team) {
}

void UTeamOwnershipComponent::SetOwnerFaction(EFaction Faction) {
}

void UTeamOwnershipComponent::SetFaction(EFaction Faction) {
}

void UTeamOwnershipComponent::OnRep_OwnerFaction() {
}

ATBLTeam* UTeamOwnershipComponent::GetOwnerTeam() {
    return NULL;
}

EFaction UTeamOwnershipComponent::GetFaction() const {
    return EFaction::Agatha;
}

void UTeamOwnershipComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTeamOwnershipComponent, OwnerFaction);
}

UTeamOwnershipComponent::UTeamOwnershipComponent() {
    this->DefaultFaction = EFaction::None;
}

