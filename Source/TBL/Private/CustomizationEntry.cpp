#include "CustomizationEntry.h"

FCustomizationEntry::FCustomizationEntry() {
    this->PlayerClass = EAudioClassType::Archer;
    this->PlayerTeam = EFaction::Agatha;
    this->bCanBePurchased = false;
    this->bCanBeListed = false;
    this->Rarity = ETBLRarity::None;
    this->LevelStat = EOnlineStat::Invalid;
    this->Level = 0;
}

