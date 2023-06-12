#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_Curve.h"
#include "UtilityAI_Consideration.generated.h"

class UUtilityAI_InputAxis;

USTRUCT(BlueprintType)
struct FUtilityAI_Consideration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUtilityAI_InputAxis* Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUtilityAI_Curve Curve;
    
    TBL_API FUtilityAI_Consideration();
};

