#include "ConditionEntry.h"

FConditionEntry::FConditionEntry() {
    this->Owner = NULL;
    this->ConditionType = EConditionType::None;
    this->StartTime = 0.00f;
    this->StackCount = 0;
    this->MaxStackCount = 0;
    this->bIsActive = false;
}

