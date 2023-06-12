#pragma once
#include "CoreMinimal.h"
#include "VirtualGoodPrice.generated.h"

USTRUCT(BlueprintType)
struct FVirtualGoodPrice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    TBL_API FVirtualGoodPrice();
};

