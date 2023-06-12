#pragma once
#include "CoreMinimal.h"
#include "HorseToCharacterImpactSettings.generated.h"

USTRUCT(BlueprintType)
struct FHorseToCharacterImpactSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StraightImpactAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlancingImpactAngle;
    
    TBL_API FHorseToCharacterImpactSettings();
};

