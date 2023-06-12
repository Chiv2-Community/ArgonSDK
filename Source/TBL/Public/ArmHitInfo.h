#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArmHitInfo.generated.h"

USTRUCT(BlueprintType)
struct FArmHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitLocation;
    
    TBL_API FArmHitInfo();
};

