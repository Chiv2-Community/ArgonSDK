#pragma once
#include "CoreMinimal.h"
#include "VirtualGoodEntry.generated.h"

class UVirtualGood;

USTRUCT(BlueprintType)
struct FVirtualGoodEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVirtualGood* Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    TBL_API FVirtualGoodEntry();
};

