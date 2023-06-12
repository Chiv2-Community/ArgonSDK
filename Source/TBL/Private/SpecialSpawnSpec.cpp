#include "SpecialSpawnSpec.h"
#include "Templates/SubclassOf.h"

bool USpecialSpawnSpec::IsHorseWave() const {
    return false;
}

bool USpecialSpawnSpec::IsAllowedClass(TSubclassOf<ATBLCharacter> CharacterClass) const {
    return false;
}

bool USpecialSpawnSpec::HasAllowedClassList() const {
    return false;
}

TSubclassOf<ULoadoutSelection> USpecialSpawnSpec::GetRandomClassLoadout() const {
    return NULL;
}

int32 USpecialSpawnSpec::GetMaxHorseCount(ASpawnWave* SpawnWave, EFaction FactionOverride) const {
    return 0;
}

TSubclassOf<ULoadoutSelection> USpecialSpawnSpec::GetAllowedClassLoadout(TSubclassOf<ATBLCharacter> CharacterClass) const {
    return NULL;
}

void USpecialSpawnSpec::GetAllowedClassesSet(TSet<TSubclassOf<ATBLCharacter>>& AllowedClassesSet, ATBLPlayerController* TargetController) const {
}

void USpecialSpawnSpec::GetAllowedClassesList(TArray<TSubclassOf<ATBLCharacter>>& AllowedClassesList, ATBLPlayerController* TargetController) const {
}

TMap<TSubclassOf<ATBLCharacter>, TSubclassOf<ULoadoutSelection>> USpecialSpawnSpec::GetAllowedClasses() const {
    return TMap<TSubclassOf<ATBLCharacter>, TSubclassOf<ULoadoutSelection>>();
}

bool USpecialSpawnSpec::ForceBotsUseLoadout() const {
    return false;
}

bool USpecialSpawnSpec::CanSpawnHorse(ASpawnWave* SpawnWave) const {
    return false;
}

USpecialSpawnSpec::USpecialSpawnSpec() {
    this->SpawnWaveIcon = NULL;
    this->bJoinAfterDeath = false;
    this->bAutospawnAllowed = false;
    this->bPromptedSpawn = true;
    this->bUseSubclassesOfAllowedClasses = false;
    this->bIgnorePlayerOwnership = false;
    this->bForceBotsUseLoadout = false;
    this->AutoVoHorseAllyPercent = 0.15f;
    this->AutoVoHorseEnemyPercent = 0.15f;
    this->AutoVoCavalaryChargeDelay = 1.00f;
    this->AutoVoOffenseChargeDelay = 3.00f;
    this->AutoVoAllyCavalaryIncomingDelay = 2.00f;
    this->AutoVoEnemyCavalryIncomingDelay = 6.00f;
    this->bHorse = false;
    this->MaxHorseCount = 6;
}

