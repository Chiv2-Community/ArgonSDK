#pragma once
#include "CoreMinimal.h"
#include "ReplaySortKey.generated.h"

USTRUCT(BlueprintType)
struct FReplaySortKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    TBL_API FReplaySortKey();
};

