#pragma once
#include "CoreMinimal.h"
#include "Replicated_UInt64.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_UInt64 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Value;
    
public:
    TBL_API FReplicated_UInt64();
};

