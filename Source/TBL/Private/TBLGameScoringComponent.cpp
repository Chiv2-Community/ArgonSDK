#include "TBLGameScoringComponent.h"

void UTBLGameScoringComponent::SetScoringComponentEnabled(bool IsEnabled) {
}

int32 UTBLGameScoringComponent::GetScoringValue() {
    return 0;
}

FGameScoringDataTable UTBLGameScoringComponent::GetScoringRow() {
    return FGameScoringDataTable{};
}

void UTBLGameScoringComponent::AwardScore(ATBLPlayerState* PlayerState, EOnlineStat Stat, int32 ScoreValueOverride) {
}

UTBLGameScoringComponent::UTBLGameScoringComponent() {
    this->Enabled = true;
}

