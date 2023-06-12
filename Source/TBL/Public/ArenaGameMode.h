#pragma once
#include "CoreMinimal.h"
#include "ArenaRoundEndDelegate.h"
#include "ArenaRoundStartDelegate.h"
#include "EFaction.h"
#include "TBLGameMode_NativeBase.h"
#include "ArenaGameMode.generated.h"

class AActor;
class AController;
class ATBLPlayerController;
class UArenaGameModeSettings;

UCLASS(Blueprintable, NonTransient)
class AArenaGameMode : public ATBLGameMode_NativeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rounds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamLives;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FinalLives;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeBetweenRounds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoundTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearWeaponsPostRound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearHorsesPostRound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetTaggedActorsPostRound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreCountdownDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePreCountdownForCustomizationLoading;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArenaRoundStart ArenaRoundStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArenaRoundEnd ArenaRoundEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UArenaGameModeSettings* ArenaGameModeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMatchEndingMusicTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRoundNumber;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AController*> ControllersNeedingToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName VictoryPodiumMapName;
    
public:
    AArenaGameMode();
private:
    UFUNCTION(BlueprintCallable)
    void TryPodiumSetup();
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowPodiumLevel();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayRoundFightCommanderVO();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPodiumLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerKicked(ATBLPlayerController* KickedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomizationJobsEmptied();
    
    UFUNCTION(BlueprintCallable)
    void OnActorSpawned(AActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadPodiumCinematic();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AwardRoundVictoryAndEndRound(EFaction Winners);
    
};

