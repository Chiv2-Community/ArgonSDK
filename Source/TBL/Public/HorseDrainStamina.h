#pragma once
#include "CoreMinimal.h"
#include "HorseDrainStamina.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FHorseDrainStamina {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinStaminaToStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrainRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DrainRateModifier;
    
    TBL_API FHorseDrainStamina();
};

