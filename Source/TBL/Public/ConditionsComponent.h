#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ConditionEntry.h"
#include "DamageTakenEvent.h"
#include "EConditionType.h"
#include "OnApplyConditionDelegate.h"
#include "OnRemoveConditionDelegate.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_Bool.h"
#include "Replicated_Float.h"
#include "Replicated_Int8.h"
#include "Replicated_UInt32.h"
#include "ConditionsComponent.generated.h"

class AActor;
class APawn;
class ATBLCharacter;
class UConditionsSpec;
class UDamageSource;
class UInteractableComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UConditionsComponent : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnApplyCondition OnApplyCondition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveCondition OnRemoveCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConditionsSpec* ConditionsSpec;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DownedTurnRateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTimesDowned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTimesCrippled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BleedingTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurningTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnFireTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDownedScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FConditionEntry> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Conditions, meta=(AllowPrivateAccess=true))
    FReplicated_UInt32 ReplicatedConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Float TotalBurnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Float TotalOnFireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DownedScore, meta=(AllowPrivateAccess=true))
    FReplicated_Int8 ReplicatedDownedScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DownedScore, meta=(AllowPrivateAccess=true))
    FReplicated_Bool bDownedCanGetup;
    
public:
    UConditionsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetDownedScore(float Score);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGetUpFromDowned();
    
public:
    UFUNCTION(BlueprintCallable)
    void Revive(ATBLCharacter* RevivedBy);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReplicateConditions();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveCondition(EConditionType Condition, bool bClearStacks, AActor* ConditionRemover);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DownedScore();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Conditions();
    
    UFUNCTION(BlueprintCallable)
    void OnDownedDamageCaused(const FDamageTakenEvent& Event);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCondition(EConditionType Condition) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOwnerUsed(APawn* UsedBy, UInteractableComponent* InteractableComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleOwnerPreBroadcastDamage(const FDamageTakenEvent& DamageTakenEvent);
    
    UFUNCTION(BlueprintCallable)
    void HandleOwnerDamageTaken(const FDamageTakenEvent& Event);
    
private:
    UFUNCTION(BlueprintCallable)
    void GetUpFromDowned();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDownedScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownedScorePercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownedScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDownedCanGetUp() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyCondition(EConditionType Condition, AActor* DamageCauser, UDamageSource* DamageSource);
    
    
    // Fix for true pure virtual functions not being implemented
};

