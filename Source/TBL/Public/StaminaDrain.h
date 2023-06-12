#pragma once
#include "CoreMinimal.h"
#include "StaminaDrain.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FStaminaDrain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrainRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DrainRateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CombatStates;
    
    TBL_API FStaminaDrain();
};

