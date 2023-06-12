#pragma once
#include "CoreMinimal.h"
#include "CombatStateGetUp.generated.h"

USTRUCT(BlueprintType)
struct FCombatStateGetUp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPreMovement: 1;
    
    TBL_API FCombatStateGetUp();
};

