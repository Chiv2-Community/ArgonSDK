#include "StoreOfferItem.h"

FStoreOfferItem::FStoreOfferItem() {
    this->CrownsGiven = 0;
    this->GoldGiven = 0;
    this->USDCentsPrice = 0.00f;
    this->GoldPrice = 0;
    this->CrownsPrice = 0;
    this->Rarity = ETBLRarity::None;
    this->bAlreadyOwnsSinglePurchase = false;
    this->Faction = EFaction::Agatha;
}

