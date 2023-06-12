#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UtilityAITargetHybrid.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct TBL_API FUtilityAITargetHybrid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Target;
    
    FUtilityAITargetHybrid();
};

