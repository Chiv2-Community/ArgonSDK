#pragma once
#include "CoreMinimal.h"
#include "HorseImpactSpeedSettings.generated.h"

USTRUCT(BlueprintType)
struct FHorseImpactSpeedSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowSpeedPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumSpeedPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighSpeedPercent;
    
    TBL_API FHorseImpactSpeedSettings();
};

