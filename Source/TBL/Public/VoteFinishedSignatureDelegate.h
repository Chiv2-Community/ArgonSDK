#pragma once
#include "CoreMinimal.h"
#include "VotingResults.h"
#include "VoteFinishedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVoteFinishedSignature, const FVotingResults&, VoteResults);

