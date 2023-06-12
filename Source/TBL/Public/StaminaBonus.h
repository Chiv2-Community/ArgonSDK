#pragma once
#include "CoreMinimal.h"
#include "LongbowStaminaBonus.h"
#include "StaminaBonus.generated.h"

USTRUCT(BlueprintType)
struct FStaminaBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnMeleeSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnWasParried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLongbowStaminaBonus Longbow;
    
    TBL_API FStaminaBonus();
};

