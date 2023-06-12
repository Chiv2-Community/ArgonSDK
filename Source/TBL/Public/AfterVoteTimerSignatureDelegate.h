#pragma once
#include "CoreMinimal.h"
#include "AfterVoteTimerSignatureDelegate.generated.h"

class UVotingInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAfterVoteTimerSignature, UVotingInstance*, VoteInstance);

