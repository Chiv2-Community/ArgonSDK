#pragma once
#include "CoreMinimal.h"
#include "VotingOption.h"
#include "ReplicatedArray_FVotingOption.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedArray_FVotingOption {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVotingOption> ReplicatedArray;
    
public:
    TBL_API FReplicatedArray_FVotingOption();
};

