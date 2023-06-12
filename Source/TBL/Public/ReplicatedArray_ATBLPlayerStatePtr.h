#pragma once
#include "CoreMinimal.h"
#include "ReplicatedArray_ATBLPlayerStatePtr.generated.h"

class ATBLPlayerState;

USTRUCT(BlueprintType)
struct FReplicatedArray_ATBLPlayerStatePtr {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATBLPlayerState*> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_ATBLPlayerStatePtr();
};

