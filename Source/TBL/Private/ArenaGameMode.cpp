#include "ArenaGameMode.h"

void AArenaGameMode::TryPodiumSetup() {
}

void AArenaGameMode::ShowPodiumLevel() {
}

void AArenaGameMode::PlayRoundFightCommanderVO() {
}

void AArenaGameMode::OnPodiumLevelLoaded() {
}

void AArenaGameMode::OnPlayerKicked(ATBLPlayerController* KickedPlayer) {
}

void AArenaGameMode::OnCustomizationJobsEmptied() {
}

void AArenaGameMode::OnActorSpawned(AActor* InActor) {
}

void AArenaGameMode::LoadPodiumCinematic() {
}

void AArenaGameMode::AwardRoundVictoryAndEndRound(EFaction Winners) {
}

AArenaGameMode::AArenaGameMode() {
    this->Rounds = 9;
    this->TeamLives = 0;
    this->FinalLives = 0;
    this->TimeBetweenRounds = 6;
    this->RoundTimeLimit = 120;
    this->bClearWeaponsPostRound = true;
    this->bClearHorsesPostRound = true;
    this->bResetTaggedActorsPostRound = true;
    this->PreCountdownDelay = 0;
    this->bUsePreCountdownForCustomizationLoading = true;
    this->ArenaGameModeSettings = NULL;
    this->bMatchEndingMusicTrigger = false;
    this->CurrentRoundNumber = 0;
}

