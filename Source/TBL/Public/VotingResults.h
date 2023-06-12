#pragma once
#include "CoreMinimal.h"
#include "VotingResults.generated.h"

USTRUCT(BlueprintType)
struct FVotingResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WinningOption;
    
    TBL_API FVotingResults();
};

