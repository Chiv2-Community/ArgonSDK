#include "MultiActorHUDMarkerAmmoRefill.h"

AMultiActorHUDMarkerAmmoRefill::AMultiActorHUDMarkerAmmoRefill() {
    this->CachedFaction = EFaction::None;
    this->CachedInventory = NULL;
    this->MaxMarkerDistance = 5000.00f;
    this->SimultaneousMarkerOverride = 2;
    this->MaxMarkerDistanceSquared = 0.00f;
}

