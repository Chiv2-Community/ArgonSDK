#pragma once
#include "CoreMinimal.h"
#include "DisableAttackRootMotion.generated.h"

USTRUCT(BlueprintType)
struct FDisableAttackRootMotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPreMovement: 1;
    
    TBL_API FDisableAttackRootMotion();
};

