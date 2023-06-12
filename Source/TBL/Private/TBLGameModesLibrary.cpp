#include "TBLGameModesLibrary.h"

ATBLWorldSettings* UTBLGameModesLibrary::GetTBLWorldSettings(const UObject* WorldContextObject) {
    return NULL;
}

TArray<ASpawnWave*> UTBLGameModesLibrary::GetAllSpawnWavesJoinableByController(UObject* WorldContextObject, AController* Controller) {
    return TArray<ASpawnWave*>();
}

TArray<ATBLCharacter*> UTBLGameModesLibrary::GetAllOutOfCombatCharactersForFaction(UObject* WorldContextObject, EFaction Faction) {
    return TArray<ATBLCharacter*>();
}

void UTBLGameModesLibrary::ActivateDeactivateAllSpawnSequencesForFaction(EFaction Faction, ESpawnSequenceActivateDeactivateAction Action, UObject* WorldContextObject) {
}

UTBLGameModesLibrary::UTBLGameModesLibrary() {
}

