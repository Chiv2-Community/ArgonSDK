#pragma once
#include "CoreMinimal.h"
#include "EParryHitLocationAdjust.h"
#include "ParryHitLocation.generated.h"

USTRUCT(BlueprintType)
struct FParryHitLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParryHitLocationAdjust AdjustLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    TBL_API FParryHitLocation();
};

