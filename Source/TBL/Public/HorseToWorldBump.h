#pragma once
#include "CoreMinimal.h"
#include "HorseToWorldBump.generated.h"

USTRUCT(BlueprintType)
struct FHorseToWorldBump {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Direction: 1;
    
    TBL_API FHorseToWorldBump();
};

