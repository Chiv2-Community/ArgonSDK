#pragma once
#include "CoreMinimal.h"
#include "Replicated_Int8.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_Int8 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Value;
    
public:
    TBL_API FReplicated_Int8();
};

