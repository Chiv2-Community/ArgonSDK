#include "TBLWorldSettings.h"
#include "AlwaysOnMusicManager.h"
#if WITH_EDITOR
#include "Engine/World.h"
#include "TBLMapSummary.h"
#include "UObject/Package.h"
#endif

#if WITH_EDITOR
void ATBLWorldSettings::PreSave(const ITargetPlatform* TargetPlatform)
{
    Super::PreSave(TargetPlatform);

    UWorld* World = GetWorld();
    UPackage* Package = GetOutermost();
    if (IsTemplate() || HasAnyFlags(RF_Transient) || !World ||
        GetLevel() != World->PersistentLevel || Package == GetTransientPackage() ||
        Package->HasAnyPackageFlags(PKG_PlayInEditor) || World->IsGameWorld())
    {
        return;
    }

    // Shipping maps expose a package-level object at <MapPackage>.MapSummary,
    // allowing loading-screen metadata to be read without loading the world.
    UObject* Existing = FindObject<UObject>(Package, TEXT("MapSummary"));
    UTBLMapSummary* Summary = Cast<UTBLMapSummary>(Existing);
    if (Existing && !Summary)
    {
        UE_LOG(LogTemp, Error, TEXT("Cannot create map summary: %s is not a TBLMapSummary."),
               *Existing->GetPathName());
        return;
    }
    if (!Summary)
    {
        Summary = NewObject<UTBLMapSummary>(Package, TEXT("MapSummary"), RF_Standalone);
    }

    Summary->SetFlags(RF_Standalone);
    // Copy FText directly to preserve localization and string-table references.
    Summary->MapName = MapName;
    Summary->MapDescription = MapDescription;
    Summary->AttackingFaction = AttackingFaction;
    Summary->GamemodeType = GamemodeType;
    MapSummary = Summary;
}
#endif

TMap<ASpawner*, FString> ATBLWorldSettings::GetSpawnerSequenceBindingPrefixes()
{
    return TMap<ASpawner*, FString>();
}

ATBLWorldSettings::ATBLWorldSettings()
{
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
