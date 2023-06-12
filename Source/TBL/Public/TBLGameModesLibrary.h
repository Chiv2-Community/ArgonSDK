#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFaction.h"
#include "ESpawnSequenceActivateDeactivateAction.h"
#include "TBLGameModesLibrary.generated.h"

class AController;
class ASpawnWave;
class ATBLCharacter;
class ATBLWorldSettings;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UTBLGameModesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTBLGameModesLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ATBLWorldSettings* GetTBLWorldSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ASpawnWave*> GetAllSpawnWavesJoinableByController(UObject* WorldContextObject, AController* Controller);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ATBLCharacter*> GetAllOutOfCombatCharactersForFaction(UObject* WorldContextObject, EFaction Faction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateDeactivateAllSpawnSequencesForFaction(EFaction Faction, ESpawnSequenceActivateDeactivateAction Action, UObject* WorldContextObject);
    
};

