#pragma once
#include "CoreMinimal.h"
#include "HorseToWorldImpactSettings.generated.h"

USTRUCT(BlueprintType)
struct FHorseToWorldImpactSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StraightImpactAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlancingImpactAngle;
    
    TBL_API FHorseToWorldImpactSettings();
};

