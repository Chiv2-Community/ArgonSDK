#pragma once
#include "CoreMinimal.h"
#include "ImpactTypeRules.h"
#include "HorseToHorseRules.generated.h"

USTRUCT(BlueprintType)
struct FHorseToHorseRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactTypeRules FrontImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactTypeRules SideImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactTypeRules BackImpact;
    
    TBL_API FHorseToHorseRules();
};

