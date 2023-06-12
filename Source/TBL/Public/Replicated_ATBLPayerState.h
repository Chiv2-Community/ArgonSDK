#pragma once
#include "CoreMinimal.h"
#include "Replicated_ATBLPayerState.generated.h"

class ATBLPlayerState;

USTRUCT(BlueprintType)
struct FReplicated_ATBLPayerState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLPlayerState* Value;
    
public:
    TBL_API FReplicated_ATBLPayerState();
};

