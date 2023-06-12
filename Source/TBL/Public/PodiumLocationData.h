#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PodiumLocationData.generated.h"

USTRUCT(BlueprintType)
struct FPodiumLocationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    TBL_API FPodiumLocationData();
};

