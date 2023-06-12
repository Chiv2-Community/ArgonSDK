#pragma once
#include "CoreMinimal.h"
#include "DamageTakenEvent.h"
#include "DeathDamageTakenEvent.h"
#include "ReplicatedSubobjectInterface.h"
#include "ReplicationPredictionState.h"
#include "TBLCharacterBase.h"
#include "Templates/SubclassOf.h"
#include "TBLAnimal.generated.h"

class ATBLCharacter;
class UAnimationSet;
class UPawnNoiseEmitterComponent;
class UStatsComponent;
class UTBLAnimalAnimInstance;

UCLASS(Blueprintable)
class ATBLAnimal : public ATBLCharacterBase, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsComponent* Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnNoiseEmitterComponent* NoiseEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTBLAnimalAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSet> AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* AnimalHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBeingThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBeingHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bPanicking, meta=(AllowPrivateAccess=true))
    bool bPanicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanicDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicatePanicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPanicWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicationPredictionState PredictionState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharMoveTickingAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSignificant;
    
public:
    ATBLAnimal();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopPanicking();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartPanicking();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCharMoveTickingAllowed(const bool bTickAllowed);
    
public:
    UFUNCTION(BlueprintCallable)
    void Ragdoll();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bPanicking();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKilled(const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(const FDamageTakenEvent& DamageEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_TornOff();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckCharMoveTick(const bool bAsync);
    
public:
    UFUNCTION(BlueprintCallable)
    void CarryableAnimalEvent(FName EventName, ATBLCharacter* ParentCharacter);
    
    
    // Fix for true pure virtual functions not being implemented
};

