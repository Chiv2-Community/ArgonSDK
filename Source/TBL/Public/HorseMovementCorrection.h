#pragma once
#include "CoreMinimal.h"
#include "HorseMovementCorrection.generated.h"

USTRUCT(BlueprintType)
struct FHorseMovementCorrection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentForwardAccel;
    
    TBL_API FHorseMovementCorrection();
};

