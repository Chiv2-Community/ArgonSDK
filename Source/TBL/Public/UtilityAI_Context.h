#pragma once
#include "CoreMinimal.h"
#include "EUtilityAI_TargetType.h"
#include "UtilityAI_Context.generated.h"

class AAIController;
class UObject;
class UUtilityAI_Behavior;

USTRUCT(BlueprintType)
struct FUtilityAI_Context {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUtilityAI_TargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TargetObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUtilityAI_Behavior* Behavior;
    
    TBL_API FUtilityAI_Context();
};

