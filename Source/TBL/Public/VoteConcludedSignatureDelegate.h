#pragma once
#include "CoreMinimal.h"
#include "VoteConcludedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVoteConcludedSignature, const FName&, WinningOption);

