#pragma once
#include "CoreMinimal.h"
#include "PickupItemSettings.generated.h"

USTRUCT(BlueprintType)
struct FPickupItemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PickupAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupTime;
    
    TBL_API FPickupItemSettings();
};

