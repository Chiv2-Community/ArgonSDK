#pragma once
#include "CoreMinimal.h"
#include "RespawnSpecialItem.generated.h"

USTRUCT(BlueprintType)
struct FRespawnSpecialItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousStoredCharge;
    
    TBL_API FRespawnSpecialItem();
};

