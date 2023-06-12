#pragma once
#include "CoreMinimal.h"
#include "VotingOption.generated.h"

class ATBLPlayerState;

USTRUCT(BlueprintType)
struct FVotingOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATBLPlayerState*> Voters;
    
    TBL_API FVotingOption();
};

