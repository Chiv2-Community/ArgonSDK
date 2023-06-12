#include "StrongholdBellTowerHudMarkerManager.h"

void AStrongholdBellTowerHudMarkerManager::PlayerEquippedItemsChanged(ATBLCharacter* Player) {
}

void AStrongholdBellTowerHudMarkerManager::OnPlayerLeftCapturePoint(ATBLCharacter* Character) {
}

void AStrongholdBellTowerHudMarkerManager::OnPlayerEnteredCapturePoint(ATBLCharacter* Character) {
}

void AStrongholdBellTowerHudMarkerManager::OnCatapultMounted(ATBLCharacter* Driver) {
}

void AStrongholdBellTowerHudMarkerManager::OnCatapultLoadStatusChanged(AInventoryItem* LoadedAmmo) {
}

void AStrongholdBellTowerHudMarkerManager::OnCatapultDismounted(ATBLCharacter* Driver, EDismountType DismountType) {
}

void AStrongholdBellTowerHudMarkerManager::DeactivateManager() {
}

void AStrongholdBellTowerHudMarkerManager::ActivateManager() {
}

AStrongholdBellTowerHudMarkerManager::AStrongholdBellTowerHudMarkerManager() {
    this->MultiActorHUDMarker = NULL;
    this->AttackingFaction = EFaction::None;
    this->TeamCapturePointActor = NULL;
    this->CatapultAmmoClass = NULL;
    this->bEnabled = false;
}

