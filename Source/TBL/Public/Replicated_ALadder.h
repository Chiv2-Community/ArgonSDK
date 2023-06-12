#pragma once
#include "CoreMinimal.h"
#include "Replicated_ALadder.generated.h"

class ALadder;

USTRUCT(BlueprintType)
struct FReplicated_ALadder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALadder* Value;
    
public:
    TBL_API FReplicated_ALadder();
};

