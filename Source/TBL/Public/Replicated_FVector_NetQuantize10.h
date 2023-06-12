#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Replicated_FVector_NetQuantize10.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FVector_NetQuantize10 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 Value;
    
public:
    TBL_API FReplicated_FVector_NetQuantize10();
};

