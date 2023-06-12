#include "StatEntry.h"

FStatEntry::FStatEntry() {
    this->BaseValue = 0.00f;
    this->BonusValue = 0.00f;
    this->BonusPercentValue = 0.00f;
    this->CurrentValue = 0.00f;
    this->bIsOverCharging = false;
    this->Owner = NULL;
    this->LastReplicatedValue = 0.00f;
    this->RegenerationTime = 0.00f;
    this->StatType = EStat::None;
}

