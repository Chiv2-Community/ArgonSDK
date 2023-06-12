#pragma once
#include "CoreMinimal.h"
#include "Replicated_UInt8.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_UInt8 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Value;
    
public:
    TBL_API FReplicated_UInt8();
};

