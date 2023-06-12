#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "CombatVolumeEventSignatureDelegate.h"
#include "CombatZoneEventSignatureDelegate.h"
#include "DeathEvent.h"
#include "EFaction.h"
#include "MatchStateListenerInterface.h"
#include "Templates/SubclassOf.h"
#include "VolumeSet.h"
#include "OutOfCombatZoneAuthority.generated.h"

class ACharacter;
class AOutOfCombatZoneAuthority;
class AOutOfCombatZoneVolume;
class APawn;
class APlayerState;
class ATBLCharacter;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class AOutOfCombatZoneAuthority : public AActor, public IMatchStateListenerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOutOfCombatZoneVolume*> ActiveVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ATBLCharacter*, FVolumeSet> Overlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorseTimerDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecentSpawnForgivenessSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorseRecentSpawnForgivenessSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ATBLCharacter*> CharactersThatSpawnedInMe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ATBLCharacter*> CharactersThatLeftMe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocalPlayerOverlapping;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ACharacter*, FTimerHandle> ActionTimerHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ACharacter*, FTimerHandle> ForgivenessTimerHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<ATBLCharacter>> ConsideredCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<ATBLCharacter>> IgnoredCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatZoneEventSignature OnActionTriggeredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatZoneEventSignature OnBeginOverlapEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatZoneEventSignature OnEndOverlapEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatZoneEventSignature OnLocalPlayerBeginOverlapEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatZoneEventSignature OnLocalPlayerEndOverlapEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatVolumeEventSignature OnActiveVolumesChanged;
    
    AOutOfCombatZoneAuthority();
    UFUNCTION(BlueprintCallable)
    void StartForgivenessTimer(ATBLCharacter* Character, FTimerHandle& TimerHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldIgnoreCharacter(ATBLCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerEndOverlap(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerBeginOverlap(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForgivenessTimerElapsed(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndOverlap(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginOverlap(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionTriggered(ATBLCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_ShouldIgnoreCharacter(ATBLCharacter* Character) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInForgivenessTime(ACharacter* Character) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerKilled(FDeathEvent DeathEvent);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnArenaRoundWon(EFaction Winner);
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalControllerPossessedPawn(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalControllerPlayerStateReplicated(APlayerState* PS);
    
    UFUNCTION(BlueprintCallable)
    void HandleEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleCharacterSpawned(ATBLCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCharacterDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleActionTimerFired(ATBLCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimerDelaySeconds(ATBLCharacter* Character, bool& OutIsInForgivenessTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForgivenessTime(ATBLCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    static float GetCurrentLowestTimeLeft(const TArray<AOutOfCombatZoneAuthority*>& Authorities, ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHaveForgivenessTime(ATBLCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelForgivenessTimer(ATBLCharacter* Character);
    
    
    // Fix for true pure virtual functions not being implemented
};

