#pragma once
#include "CoreMinimal.h"
#include "ImpactTypeRules.h"
#include "HorseToObjectRules.generated.h"

USTRUCT(BlueprintType)
struct FHorseToObjectRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactTypeRules StraightImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactTypeRules GlancingImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactTypeRules BumpImpact;
    
    TBL_API FHorseToObjectRules();
};

