#pragma once
#include "CoreMinimal.h"
#include "Replicated_UInt16.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_UInt16 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Value;
    
public:
    TBL_API FReplicated_UInt16();
};

