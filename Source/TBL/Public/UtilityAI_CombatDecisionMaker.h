#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "CombatEventBehaviors.h"
#include "IncomingAttackInfo.h"
#include "UtilityAI_DecisionMaker.h"
#include "UtilityAI_CombatDecisionMaker.generated.h"

class ATBLCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UUtilityAI_CombatDecisionMaker : public UUtilityAI_DecisionMaker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEventBehaviors Blocked_BehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEventBehaviors Thwacked_BehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEventBehaviors ParrySuccess_BehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle HandleParryTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEventBehaviors Recovery_BehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEventBehaviors DamageCaused_BehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEventBehaviors IncomingAttack_BehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEventBehaviors IncomingShove_BehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEventBehaviors IncomingCombatStateChange_BehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRecieveAllCombatStateChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle HandleAttackTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEventBehaviors EnemyBlockedMyHit_BehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEventBehaviors EnemyEnteredCC_BehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEventBehaviors TookDamage_BehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATBLCharacter* OverrideDecisionActor;
    
    UUtilityAI_CombatDecisionMaker();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIncomingAttackInfo GetIncomingAttackInfo() const;
    
};

