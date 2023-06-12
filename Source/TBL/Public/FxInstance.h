#pragma once
#include "CoreMinimal.h"
#include "AttackInfo.h"
#include "DeathDamageTakenEvent.h"
#include "EDelegateRemovalPolicy.h"
#include "EStopTimerPolicy.h"
#include "FxEventListener.h"
#include "InstancedObjectContainer.h"
#include "FxInstance.generated.h"

class AActor;
class UAkAudioEvent;
class UCombatState;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, MinimalAPI)
class UFxInstance : public UFxEventListener, public IInstancedObjectContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStopTimerPolicy StopTimerPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDelegateRemovalPolicy DelegateRemovalPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnbindOnAttackEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFxEventListener*> EventListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaySuicideDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayBandageDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BandageAppliedSound;
    
    UFxInstance();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCharacterPostProcessMID(UMaterialInstanceDynamic* InCharacterPostProcessMID);
    
    UFUNCTION(BlueprintCallable)
    void ResetCharacterPostProcessMID();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayWeaponCombatStateSound(const AActor* SoundActor, const FName PreviousCombatState, const FName NewCombatState, const FAttackInfo AttackInfo, const UCombatState* CombatState);
    
    UFUNCTION(BlueprintCallable)
    void PlayCharacterCombatStateSound(const AActor* SoundActor, const FName PreviousCombatState, const FName NewCombatState, const FAttackInfo AttackInfo, const UCombatState* CombatState);
    
    UFUNCTION(BlueprintCallable)
    void OnKilledInternal(const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChangedInternal(AActor* InActor, FName EventName, const FAttackInfo& EventAttackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnActorPreAbilityInitiate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetCharacterPostProcessMID() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Cleanup();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ResetPostProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreBloodDecalsRestricted() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

