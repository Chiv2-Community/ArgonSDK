#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFaction.h"
#include "Templates/SubclassOf.h"
#include "SpecialSpawnSpec.generated.h"

class ASpawnWave;
class ATBLCharacter;
class ATBLPlayerController;
class ULoadoutSelection;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class USpecialSpawnSpec : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SpawnName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SpawnWaveIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJoinAfterDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutospawnAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPromptedSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSubclassesOfAllowedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePlayerOwnership;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceBotsUseLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoVoHorseAllyPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoVoHorseEnemyPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoVoCavalaryChargeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoVoOffenseChargeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoVoAllyCavalaryIncomingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoVoEnemyCavalryIncomingDelay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHorse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHorseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ATBLCharacter>, TSubclassOf<ULoadoutSelection>> AllowedClasses;
    
public:
    USpecialSpawnSpec();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHorseWave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowedClass(TSubclassOf<ATBLCharacter> CharacterClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllowedClassList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ULoadoutSelection> GetRandomClassLoadout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHorseCount(ASpawnWave* SpawnWave, EFaction FactionOverride) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ULoadoutSelection> GetAllowedClassLoadout(TSubclassOf<ATBLCharacter> CharacterClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllowedClassesSet(TSet<TSubclassOf<ATBLCharacter>>& AllowedClassesSet, ATBLPlayerController* TargetController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllowedClassesList(TArray<TSubclassOf<ATBLCharacter>>& AllowedClassesList, ATBLPlayerController* TargetController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<TSubclassOf<ATBLCharacter>, TSubclassOf<ULoadoutSelection>> GetAllowedClasses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ForceBotsUseLoadout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpawnHorse(ASpawnWave* SpawnWave) const;
    
};

