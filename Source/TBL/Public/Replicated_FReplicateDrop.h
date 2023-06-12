#pragma once
#include "CoreMinimal.h"
#include "ReplicateDrop.h"
#include "Replicated_FReplicateDrop.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FReplicateDrop {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicateDrop Value;
    
public:
    TBL_API FReplicated_FReplicateDrop();
};

