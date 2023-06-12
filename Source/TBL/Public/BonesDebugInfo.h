#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "BonesDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FBonesDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParentBone;
    
    TBL_API FBonesDebugInfo();
};

