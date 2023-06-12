#pragma once
#include "CoreMinimal.h"
#include "BehaviorSetOverride.generated.h"

class UUtilityAI_Behavior;
class UUtilityAI_BehaviorSet;

USTRUCT(BlueprintType)
struct FBehaviorSetOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUtilityAI_BehaviorSet> BehaviorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideExistingBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUtilityAI_Behavior*> Behaviors;
    
    TBL_API FBehaviorSetOverride();
};

