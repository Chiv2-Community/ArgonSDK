#include "GameSparksAsset.h"

UGameSparksAsset::UGameSparksAsset() {
    this->PriceGold = 0;
    this->PriceCrowns = 0;
    this->PriceUSDCents = 0;
    this->Listing = EStoreListing::StoreOffers;
    this->bSinglePurchase = false;
    this->bCanBePurchased = true;
    this->bCanBeListed = true;
    this->bAlwaysListOnSteam = false;
    this->GrantGold = 0;
    this->GrantCrowns = 0;
    this->LevelStat = EOnlineStat::Invalid;
    this->Level = 0;
    this->Rarity = ETBLRarity::Common;
    this->Faction = EFaction::None;
}

