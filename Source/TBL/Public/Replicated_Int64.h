#pragma once
#include "CoreMinimal.h"
#include "Replicated_Int64.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_Int64 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Value;
    
public:
    TBL_API FReplicated_Int64();
};

