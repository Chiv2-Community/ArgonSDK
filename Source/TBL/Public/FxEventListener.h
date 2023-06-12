#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/EngineTypes.h"
#include "Ability.h"
#include "AttackInfo.h"
#include "ClashEventState.h"
#include "CrowdControlParams.h"
#include "DamageTakenEvent.h"
#include "DeathDamageTakenEvent.h"
#include "DeathEvent.h"
#include "EConditionType.h"
#include "EFailedInventoryAction.h"
#include "EHealingSource.h"
#include "EHorseImpactLocation.h"
#include "EHorseToCharacterImpactType.h"
#include "EHorseToHorseImpactType.h"
#include "EHorseToWorldImpactType.h"
#include "EInventoryItemDamagedState.h"
#include "EResultCode.h"
#include "EStat.h"
#include "ETargetMethodEvent.h"
#include "EpicEndGameState.h"
#include "InventoryItemDamagedParams.h"
#include "LandedResult.h"
#include "ParryEventState.h"
#include "StatEntry.h"
#include "TBLObject.h"
#include "Templates/SubclassOf.h"
#include "FxEventListener.generated.h"

class AAbilityInvocation;
class AActor;
class AController;
class AHorse;
class AInventoryItem;
class ASiegeEngine;
class ATBLCharacter;
class ATBLPlayerState;
class UCombatState;
class UDamageSource;
class UPhysicalMaterial;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UFxEventListener : public UTBLObject {
    GENERATED_BODY()
public:
    UFxEventListener();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProjectileStopped(AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProjectileStarted(AInventoryItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldHit(AActor* Actor, FVector Location, UPhysicalMaterial* PhysMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWasParried(ATBLCharacter* ThisCharacter, ATBLCharacter* OtherCharacter, FParryEventState ParryEventState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetMethodEvent(AActor* Initiator, FName TargetMethodName, TEnumAsByte<ETargetMethodEvent::Type> Event, const AAbilityInvocation* Invocation, FVector Location, const TArray<AActor*>& HitTargets);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuicide(AActor* Suicider, const FDamageTakenEvent& DamageTakenEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatChanged(AActor* Actor, EStat Type, const FStatEntry& Stat, float DeltaValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedFalling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStaminaCostFailed(FName Event);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetThirdPersonDeathCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRagdollPhysics();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetOnFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetOffFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetFirstPersonDeathCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoveCondition(AActor* Actor, EConditionType Condition, AActor* ConditionRemover);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRagdollHit(AActor* HitTaker, AActor* HitCauser, AInventoryItem* Weapon, const FHitResult& HitResult, const FVector& HitDirection, float Damage, UDamageSource* DamageSource, AActor* Projectile, FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPossessed(AController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerMeshChanged(USkeletalMeshComponent* OldMesh, USkeletalMeshComponent* NewMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerKilled(FDeathEvent DeathEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnParrySuccess(ATBLCharacter* ThisCharacter, ATBLCharacter* OtherCharacter, FParryEventState ParryEventState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMountSiegeEngine(ASiegeEngine* SiegeEngine);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKilled(const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInvocationActorCreated(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInventoryProjectilePenetratedPassiveShield(AInventoryItem* Shield, AInventoryItem* Projectile, FVector HitLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInventoryProjectileHitPassiveShield(AInventoryItem* Shield, AInventoryItem* Projectile);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInventoryItemDamageStateChanged(AInventoryItem* Item, EInventoryItemDamagedState DamagedState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInventoryItemDamaged(AInventoryItem* Item, FInventoryItemDamagedParams Params);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInventoryActionFailed(EFailedInventoryAction Action);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHorseToWorldImpact(FHitResult Hit, EHorseImpactLocation ImpactLocation, EHorseToWorldImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHorseToHorseImpact(AHorse* TargetHorse, EHorseImpactLocation ImpactLocation, EHorseToHorseImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHorseToCharacterImpact(ATBLCharacter* TargetCharacter, EHorseImpactLocation ImpactLocation, EHorseToCharacterImpactType ImpactType, FName ImpactCombatState, float ImpactSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHorseFxEvent(FName EventName, float EventScale, const TArray<FName>& EventTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHorseBreakingEvent(bool bIsBreaking, bool bIsEmergencyBreaking, float CurrentSpeed, FName PreviousState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealOverTimeStart(EHealingSource HealingSource, const ATBLPlayerState* InstigatingPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealOverTimeEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealOverTimeAdded(EHealingSource HealingSource, const ATBLPlayerState* InstigatingPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExperienceLevelChanged(AActor* Actor, int32 NewLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEpicEndGame(const FEpicEndGameState& EpicEndGameState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDismountSiegeEngine(ASiegeEngine* SiegeEngine, bool Forced);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageTaken(const FDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageCaused(const FDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCrowdControlNoDamage(AActor* OwningActor, FName CombatState, FCrowdControlParams CrowdControlParams);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstruct(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatStateEvent(AActor* Actor, FName EventName, const FAttackInfo& EventAttackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatStateEnd(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatStateBegin(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClientPreTravel(const FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClash(ATBLCharacter* InitiatorCharacter, ATBLCharacter* TargetCharacter, FClashEventState ClashEventState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterLanded(const FLandedResult& LandedResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplyCondition(AActor* Actor, EConditionType Condition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimNotifyStepEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAmmoInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityOnCooldown(const FAbility& Ability, float RemainingTime, AInventoryItem* InventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityError(AActor* Initiator, TEnumAsByte<EResultCode::Type> Code, AAbilityInvocation* Invocation, FName AttackName, TSubclassOf<AInventoryItem> ItemClass);
    
};

