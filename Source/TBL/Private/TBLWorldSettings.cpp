#include "TBLWorldSettings.h"
#include "AlwaysOnMusicManager.h"

TMap<ASpawner*, FString> ATBLWorldSettings::GetSpawnerSequenceBindingPrefixes() {
    return TMap<ASpawner*, FString>();
}

ATBLWorldSettings::ATBLWorldSettings() {
    this->MapSummary = NULL;
    this->AttackingFaction = EFaction::None;
    this->DefendingFaction = EFaction::None;
    this->UseNewStageIdNumbers = false;
    this->GamemodeType = EGameModeType::MAX;
    this->GameModeSettings = NULL;
    this->GameModeMessageTable = NULL;
    this->DefaultContextVoFrequencyPerMin = 2.00f;
    this->DefaultContextVoNumPlayers = 2;
    this->AttackerInitialSpawn = NULL;
    this->DefenderInitialSpawn = NULL;
    this->PodiumTime = 10.00f;
    this->BlockLoadoutSelectionInClassSelectScreen = false;
    this->AlwaysOnMusicManagerClass = AAlwaysOnMusicManager::StaticClass();
    this->DisableFallState = false;
    this->DisableSpectatorInTeamSelect = false;
    this->bBotsShouldAlwaysCheckFloor = false;
}

