#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ResetToTransform.generated.h"

USTRUCT(BlueprintType)
struct FResetToTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Rotation;
    
    TBL_API FResetToTransform();
};

