#include "QuestReward.h"

FQuestReward::FQuestReward() {
    this->Type = EQuestRewardType::Item;
    this->Quantity = 0;
    this->bIsPremium = false;
    this->ItemEquivalentCurrencyAmount = 0.00f;
}

