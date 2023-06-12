#pragma once
#include "CoreMinimal.h"
#include "LongbowStaminaBonus.generated.h"

USTRUCT(BlueprintType)
struct FLongbowStaminaBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnOutOfStamina;
    
    TBL_API FLongbowStaminaBonus();
};

