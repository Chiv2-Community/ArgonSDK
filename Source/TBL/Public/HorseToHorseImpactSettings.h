#pragma once
#include "CoreMinimal.h"
#include "HorseToHorseImpactSettings.generated.h"

USTRUCT(BlueprintType)
struct FHorseToHorseImpactSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StraightImpactAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideImpactAngle;
    
    TBL_API FHorseToHorseImpactSettings();
};

