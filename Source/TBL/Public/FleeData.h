#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FleeData.generated.h"

USTRUCT(BlueprintType)
struct FFleeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FleeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InstigatorLocation;
    
    TBL_API FFleeData();
};

