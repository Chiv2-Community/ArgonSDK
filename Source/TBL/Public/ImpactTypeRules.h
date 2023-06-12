#pragma once
#include "CoreMinimal.h"
#include "ECollisionInteraction.h"
#include "ImpactTypeRules.generated.h"

USTRUCT(BlueprintType)
struct FImpactTypeRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionInteraction LowSpeedInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionInteraction MediumSpeedInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionInteraction HighSpeedInteraction;
    
    TBL_API FImpactTypeRules();
};

