#pragma once
#include "CoreMinimal.h"
#include "ReplicatedDateTime.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedDateTime {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Ticks;
    
public:
    TBL_API FReplicatedDateTime();
};

