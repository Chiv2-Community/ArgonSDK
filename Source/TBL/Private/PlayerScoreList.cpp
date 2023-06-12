#include "PlayerScoreList.h"

void UPlayerScoreList::PlayerStateReplicated(APlayerState* PlayerState) {
}

void UPlayerScoreList::OnPlayerScoreEvent(FScoreEventStruct ScoreEvent) {
}

void UPlayerScoreList::OnPlayerLevelUpEvents(const TArray<FLevelUpResult>& LevelUpEvents) {
}

void UPlayerScoreList::OnInitialized(ATBLPlayerController* PlayerOwner) {
}

void UPlayerScoreList::CheckForPlayerState() {
}

UPlayerScoreList::UPlayerScoreList() {
    this->Lifetime = 4.00f;
    this->LevelUpLifeTime = 0.00f;
    this->ObjectiveScoreWidget = NULL;
    this->HealingScoreWidget = NULL;
    this->LoadedPlayerController = false;
    this->bSuccessfulPlayerStateReplicated = false;
}

