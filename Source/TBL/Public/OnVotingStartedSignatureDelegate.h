#pragma once
#include "CoreMinimal.h"
#include "OnVotingStartedSignatureDelegate.generated.h"

class UVotingInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVotingStartedSignature, UVotingInstance*, VotingInstance);

