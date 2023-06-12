#pragma once
#include "CoreMinimal.h"
#include "Replicated_UInt32.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_UInt32 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
public:
    TBL_API FReplicated_UInt32();
};

