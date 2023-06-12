#pragma once
#include "CoreMinimal.h"
#include "WeaponTipMaxAngle.generated.h"

USTRUCT(BlueprintType)
struct FWeaponTipMaxAngle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Horizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Vertical;
    
    TBL_API FWeaponTipMaxAngle();
};

