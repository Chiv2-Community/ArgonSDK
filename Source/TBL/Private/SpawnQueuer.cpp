#include "SpawnQueuer.h"

bool USpawnQueuer::RequestSpawnFor_Implementation(AController* PC) {
    return false;
}

bool USpawnQueuer::RemoveFromQueue_Implementation(AController* PC) {
    return false;
}



bool USpawnQueuer::IsActive() {
    return false;
}

void USpawnQueuer::Deactivate() {
}

bool USpawnQueuer::CanDeactivate_Implementation() {
    return false;
}

bool USpawnQueuer::CanActivate_Implementation() {
    return false;
}

void USpawnQueuer::Activate() {
}

USpawnQueuer::USpawnQueuer() {
    this->bApplysToAllTeams = false;
    this->Faction = EFaction::Agatha;
    this->bAutoActivate = true;
    this->bAutoDeactivate = true;
}

