#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CombatEventBehaviors.generated.h"

class UUtilityAI_Behavior;
class UUtilityAI_BehaviorSet;

USTRUCT(BlueprintType)
struct FCombatEventBehaviors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUtilityAI_BehaviorSet> BehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUtilityAI_Behavior*> Behaviors;
    
    TBL_API FCombatEventBehaviors();
};

