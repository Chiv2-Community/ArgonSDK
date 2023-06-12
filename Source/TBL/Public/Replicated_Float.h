#pragma once
#include "CoreMinimal.h"
#include "Replicated_Float.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_Float {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    TBL_API FReplicated_Float();
};

