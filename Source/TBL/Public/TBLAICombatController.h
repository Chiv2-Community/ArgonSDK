#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AttackInfo.h"
#include "CombatAiAttackParams.h"
#include "DamageTakenEvent.h"
#include "DisengageParams.h"
#include "EAiCombatDistance.h"
#include "EAiCombatStrafing.h"
#include "EAiMeleeCombatMode.h"
#include "EMovementDirection.h"
#include "EngageParams.h"
#include "TBLAIController.h"
#include "TBLAICombatController.generated.h"

class AActor;
class UCombatState;
class UUtilityAI_CombatDecisionMaker;

UCLASS(Blueprintable)
class ATBLAICombatController : public ATBLAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAiMeleeCombatMode MeleeCombatMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Advantage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CombatTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUtilityAI_CombatDecisionMaker* CombatDecisionMakerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RecentBlockedHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLastAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatTargetDesiredDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAiCombatDistance DesiredDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAiCombatStrafing DesiredStrafing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngageSprintStartOkayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngageSprintStopMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintAttackOkayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintAttackOkayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackOkayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngagementMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisengagementMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDistanceToKeep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacehugRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseAttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumAttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarAttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutsideAttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatMovementMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StuckMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorneringDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetFromCornersDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle EdgeDetectionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NearestNavWallNormal;
    
    ATBLAICombatController();
    UFUNCTION(BlueprintCallable)
    void StrafeAndKeepDistance(EAiCombatDistance Distance, EAiCombatStrafing Strafing);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseBlock();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateBegin(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* CombatState);
    
    UFUNCTION(BlueprintCallable)
    void HoldBlock();
    
    UFUNCTION(BlueprintCallable)
    void HandleTookDamage(const FDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void HandleDamageCaused(const FDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAiMeleeCombatMode GetMeleeCombatMode() const;
    
    UFUNCTION(BlueprintCallable)
    void Engage(const FEngageParams& InEngageParams);
    
    UFUNCTION(BlueprintCallable)
    void EnemyOnCombatStateBegin(AActor* Actor, FName State, const FAttackInfo& EventAttackInfo, UCombatState* CombatState);
    
    UFUNCTION(BlueprintCallable)
    void Dodge(TArray<TEnumAsByte<EMovementDirection>> AllowedDirections);
    
    UFUNCTION(BlueprintCallable)
    void Disengage(const FDisengageParams& InDisengageParams);
    
    UFUNCTION(BlueprintCallable)
    void Attack(FCombatAiAttackParams InParams);
    
};

