#pragma once
#include "CoreMinimal.h"
#include "CombatStateSlowdown.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FCombatStateSlowdown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ModifierCurve;
    
    TBL_API FCombatStateSlowdown();
};

