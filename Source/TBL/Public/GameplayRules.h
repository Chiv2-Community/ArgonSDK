#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AimPenalty.h"
#include "AttackInfo.h"
#include "DamageTakenEvent.h"
#include "DeathDamageTakenEvent.h"
#include "EAttackerBlockedPolicy.h"
#include "EComboTimingPolicy.h"
#include "ECrowdControlVariant.h"
#include "EDefenderBlockedPolicy.h"
#include "EOnHitEffect.h"
#include "EOnProjectileHitEffect.h"
#include "GoreEvent.h"
#include "Templates/SubclassOf.h"
#include "GameplayRules.generated.h"

class AActor;
class AController;
class AInventoryItem;
class ATBLCharacter;
class UAttackType;
class UDamageSource;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGameplayRules : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimPenalty;
    
public:
    UGameplayRules();
    UFUNCTION(BlueprintCallable)
    float UpdateAimPenalty(float DeltaSeconds, const TArray<FAimPenalty>& AimPenalties);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TutorialCanDamage(ATBLCharacter* InitiatorCharacter, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldStartProjectileCounterWindow(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldStartCounterWindow(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldStartActiveRiposteWindow(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldScoreKill(AController* Killer, AController* Killed, const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ShouldPlayDamageTaken(const FDamageTakenEvent& DamageTakenEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldGotoDowned(AActor* Target, AActor* Initiator, FName AbilityName, AInventoryItem* InventoryItem, UDamageSource* DamageType, const FDamageTakenEvent& DamageTakenEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldComboCancelQueue(FName CombatState, const FAttackInfo& Attack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ShouldBlockSameAttack(ATBLCharacter* AttackingCharacter, ATBLCharacter* DefendingCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldAttackBeCountered(const ATBLCharacter* HitCharacter, ATBLCharacter* AttackingCharacter, AInventoryItem* AttackingItem, AInventoryItem* DefenderItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileHit(EOnProjectileHitEffect& OutHitEffect, float& OutBounceVelocityModifier, AInventoryItem* Projectile, EOnProjectileHitEffect InHitEffect, const FHitResult& InHitResult, float InBounceVelocityModifier);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnParryBreak(ATBLCharacter* AttackingCharacter, ATBLCharacter* DefendingCharacter, AInventoryItem* AttackingItem, AInventoryItem* DefendingItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageTaken(EOnHitEffect& OutHitEffect, ECrowdControlVariant& OutCrowdControlVariant, EOnHitEffect InHitEffect, ECrowdControlVariant InCrowdControlVariant, AActor* HitActor, const FDamageTakenEvent& DamageEvent, FName AttackName, AInventoryItem* AttackingItem, UAttackType* AttackType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsValidSelfInflictedDamageSource(UDamageSource* DamageSource);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBlocking(const ATBLCharacter* Character, FName AttackName, FName CombatState, ATBLCharacter* AttackingCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    float GetRangedInaccuracy(AInventoryItem* Projectile);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGoreEvent GetGoreEventOnDamage(const FDamageTakenEvent& DamageTakenEvent, bool bIsRagdollHit, bool bShouldApplyConditions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetDisarmImpulse(const AInventoryItem* AttackerItem, const FVector HitDirection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EDefenderBlockedPolicy GetDefenderBlockedPolicy(bool& bShouldDisarm, EDefenderBlockedPolicy InDefenderBlockedPolicy, ATBLCharacter* AttackingCharacter, ATBLCharacter* DefendingCharacter, AInventoryItem* AttackingItem, AInventoryItem* DefendingItem, bool bProjectileAttack, bool bSameAttackClash, bool bWasBlockedWithParryForgivenessWindow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ECrowdControlVariant GetCrowdControlVariant(ECrowdControlVariant InCrowdControlVariant, AActor* HitActor, FName CombatState, TSubclassOf<AInventoryItem> InventoryItemClass, FName AbilityName, UAttackType* AttackType, bool IsOnHorse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EComboTimingPolicy GetComboTimingPolicy(EComboTimingPolicy InComboTimingPolicy, ATBLCharacter* Character, FName CombatState, const FAttackInfo& PrevAttack, const FAttackInfo& NextAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EAttackerBlockedPolicy GetAttackerBlockedPolicy(EAttackerBlockedPolicy InAttackerBlockedPolicy, ATBLCharacter* AttackingCharacter, ATBLCharacter* DefendingCharacter, AInventoryItem* AttackingItem, AInventoryItem* DefendingItem, bool bSameAttackClash);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ApplyDamageConditions(AActor* HitActor, const FDamageTakenEvent& DamageEvent);
    
};

