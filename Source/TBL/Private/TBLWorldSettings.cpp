#include "TBLWorldSettings.h"
#include "AlwaysOnMusicManager.h"
#include "TBLMapSummary.h"
#include "UObject/UObjectGlobals.h"

namespace
{
    const FName NAME_MapSummary(TEXT("MapSummary"));
} // namespace

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


void ATBLWorldSettings::CreateMapSummary()
{
    if (IsTemplate(RF_ArchetypeObject | RF_ClassDefaultObject))
    {
        return;
    }

    if (MapSummary == nullptr)
    {
        MapSummary = FindObject<UTBLMapSummary>(GetOutermost(), TEXT("MapSummary"));
        if (MapSummary == nullptr)
        {
            MapSummary = NewObject<UTBLMapSummary>(GetOutermost(), NAME_MapSummary, RF_Standalone);
            MapSummary->MapName = MapName;
            MapSummary->MapDescription = MapDescription;
            MapSummary->GamemodeType = GamemodeType;
            return;
        }
    }
    else if (MapSummary->GetFName() != NAME_MapSummary)
    {
        MapSummary = DuplicateObject<UTBLMapSummary>(MapSummary, GetOutermost(), NAME_MapSummary);
    }
}

void ATBLWorldSettings::PreSave(const ITargetPlatform* TargetPlatform)
{
    Super::PreSave(TargetPlatform);
    if (MapSummary == nullptr || !MapSummary->IsIn(GetOutermost()))
    {
        MapSummary = nullptr;
        CreateMapSummary();
    }

    if (!IsValid(MapSummary))
    {
        return;
    }

    MapSummary->MapName = MapName;
    MapSummary->MapDescription = MapDescription;
    MapSummary->AttackingFaction = AttackingFaction;
    MapSummary->GamemodeType = GamemodeType;
}
