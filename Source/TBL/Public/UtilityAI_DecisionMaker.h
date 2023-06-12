#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EStaggeredUpdateCategory.h"
#include "BehaviorSetOverride.h"
#include "Templates/SubclassOf.h"
#include "UtilityAI_Decision.h"
#include "UtilityAI_DecisionMaker.generated.h"

class UBlackboardData;
class UUtilityAI_Behavior;
class UUtilityAI_BehaviorSet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UUtilityAI_DecisionMaker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUtilityAI_BehaviorSet>> BehaviorSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUtilityAI_Behavior*> Behaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UUtilityAI_Behavior>, UUtilityAI_Behavior*> BehaviorsByClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUtilityAI_Decision LastDecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUtilityAI_Decision DecisionPendingDisengage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UUtilityAI_Behavior>, float> LastTimeBehaviorChosen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStaggeredUpdateCategory UpdateCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardData* BlackboardAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCombatDecisionMaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUtilityAI_Decision> LastDecisions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBehaviorSetOverride ForcedBehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FBehaviorSetOverride> BehaviorOverrides;
    
public:
    UUtilityAI_DecisionMaker();
};

