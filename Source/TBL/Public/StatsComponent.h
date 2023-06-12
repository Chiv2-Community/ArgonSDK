#pragma once
#include "CoreMinimal.h"
#include "BaseStatEntry.h"
#include "BroadcastKilledParams.h"
#include "DamageFailedSignatureDelegate.h"
#include "DamageTakenEvent.h"
#include "DamageTakenEventCompressed.h"
#include "DamageTakenSignatureDelegate.h"
#include "DebugHealOverTime.h"
#include "DisabledRegenArray.h"
#include "EConditionType.h"
#include "EFaction.h"
#include "EHealingSource.h"
#include "EMod.h"
#include "EStat.h"
#include "ETeamDamageOptions.h"
#include "ExperienceLevelChangedSignatureDelegate.h"
#include "HealOverTime.h"
#include "KilledSignatureDelegate.h"
#include "OnHealOverTimeDelegate.h"
#include "OnHealOverTimeEndedDelegate.h"
#include "OnNeedsHealingChangedDelegate.h"
#include "OnStaminaDrainedDelegate.h"
#include "PostDamageTakenSignatureDelegate.h"
#include "PreBroadcastDamageSignatureDelegate.h"
#include "ReplicatedArray_FModEntry.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_EFaction.h"
#include "Replicated_Float.h"
#include "ScoredKillSignatureDelegate.h"
#include "StatEntry.h"
#include "StatHealthChangedSignatureDelegate.h"
#include "StatRegeneration.h"
#include "StatsArray.h"
#include "StatsChangedSignatureDelegate.h"
#include "StatsComponentInitializedDelegate.h"
#include "TBLComponent.h"
#include "StatsComponent.generated.h"

class AActor;
class ATBLCharacter;
class ATBLPlayerState;
class UCurveFloat;
class UDamageSource;
class UDataTable;
class UObject;
class UStatsDelegateObject;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatsComponent : public UTBLComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatsComponentInitialized OnStatsComponentInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreBroadcastDamageSignature OnPreBroadcastDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageTakenSignature OnPreDamageTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageTakenSignature OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostDamageTakenSignature OnPostDamageTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageTakenSignature OnDamageCaused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageFailedSignature OnDamageFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKilledSignature OnKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScoredKillSignature OnScoredKill;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExperienceLevelChangedSignature OnExperienceLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatsChangedSignature OnStatChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatHealthChangedSignature OnStatHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStaminaDrained OnStaminaDrained;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealOverTime OnHealOverTimeStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealOverTime OnHealOverTimeAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealOverTimeEnded OnHealOverTimeEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNeedsHealingChanged OnNeedsHealingChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FStatsArray Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    FReplicated_Float ReplicatedHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxHealth, meta=(AllowPrivateAccess=true))
    FReplicated_Float ReplicatedMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Stamina, meta=(AllowPrivateAccess=true))
    FReplicated_Float ReplicatedStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStatsDelegateObject*> StatChangedDelegates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FReplicatedArray_FModEntry Mods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBaseStatEntry> BaseStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StatsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatsDataTableRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStatsScaleToPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PlayerCountHealthScalingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicateStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableRegenTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableProjectileDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSiegeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopProjectileOnBlockingHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamDamageOptions OnTeamDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageSource*> AllowedDamageSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatRegeneration> StatRegeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugGotoDowned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousStaminaReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionType OnDamageApplyCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastParrySuccessTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageTakenEvent LastDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAppliedPlayerCountHealthScaling;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegenDisabledId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDisabledRegenArray RegenDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHealOverTime> HealOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDebugHealOverTime> DebugHealOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGatherDebugHealOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeginPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoggedKillEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction AllowedDamagingFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_EFaction ReplicatedAllowedDamagingFaction;
    
public:
    UStatsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UndoDisableRegeneration(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void StartHealOverTime(float Amount, float Speed, UCurveFloat* Curve, ATBLCharacter* Healer, ATBLPlayerState* InstigatorPlayerState, bool AwardHealingScore, bool bOverheal, EHealingSource HealingSource);
    
    UFUNCTION(BlueprintCallable)
    void SetBase(EStat Stat, float Value, bool bCanOverCharge);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowedDamagingFaction(EFaction InFaction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDebugSetBase(EStat Stat, float Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDebugApplyDamage(float Damage, UDamageSource* DamageSource);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDebugApplyBonus(EStat Stat, float Value);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveHealthChanged(float Amount, UDamageSource* DamageSource, AActor* InitiatorActor);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveExperienceChanged(float Amount, UDamageSource* DamageSource, AActor* InitiatorActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Stamina();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidDamagingFaction(EFaction inDamageFaction);
    
    UFUNCTION(BlueprintCallable)
    bool IsRegenerationDisabled(EStat Stat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMod(TEnumAsByte<EMod::Type> Mod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHealOverTimeOfSource(EHealingSource HealingSource) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHealOverTime() const;
    
    UFUNCTION(BlueprintCallable)
    UStatsDelegateObject* GetStatChangedDelegate(EStat Stat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStatEntry GetStat(EStat Stat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealOverTimeLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExperienceLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFaction GetAllowedDamagingFaction();
    
    UFUNCTION(BlueprintCallable)
    void DrainStamina(float Amount);
    
    UFUNCTION(BlueprintCallable)
    int32 DisableRegeneration(EStat Stat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float Current(EStat Stat) const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastKilled(const TArray<AActor*>& Killers, FBroadcastKilledParams Params);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastHealOverTime(float Amount, float Speed, UCurveFloat* Curve, ATBLPlayerState* InstigatorPlayerState, bool bOverheal, EHealingSource HealingSource);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastDamageTaken(FDamageTakenEventCompressed Event, int32 InvocationId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BonusPercent(EStat Stat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float Bonus(EStat Stat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float base(EStat Stat) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool ApplyPlayerCountHealthScalingCurve(UObject* Target, UCurveFloat* OverrideCurve);
    
    UFUNCTION(BlueprintCallable)
    void ApplyModDelta(TEnumAsByte<EMod::Type> Mod, int32 Delta);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBonusPercent(EStat Stat, float Value, bool bCanOverCharge);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBonus(EStat Stat, float Value, bool bCanOverCharge);
    
    UFUNCTION(BlueprintCallable)
    void AddStamina(float Amount);
    
    
    // Fix for true pure virtual functions not being implemented
};

