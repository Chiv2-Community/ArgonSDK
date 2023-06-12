#pragma once
#include "CoreMinimal.h"
#include "InstigatedVote.generated.h"

USTRUCT(BlueprintType)
struct FInstigatedVote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoteResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VotedFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstigationTime;
    
    TBL_API FInstigatedVote();
};

