#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VirtualGoodReward.generated.h"

USTRUCT(BlueprintType)
struct FVirtualGoodReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath VirtualGood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    TBL_API FVirtualGoodReward();
};

