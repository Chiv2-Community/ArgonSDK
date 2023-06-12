#pragma once
#include "CoreMinimal.h"
#include "DownedSprintStamina.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FDownedSprintStamina {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinStaminaToStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrainRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DrainRateModifier;
    
    TBL_API FDownedSprintStamina();
};

