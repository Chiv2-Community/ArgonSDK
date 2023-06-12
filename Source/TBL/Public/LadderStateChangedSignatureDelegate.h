#pragma once
#include "CoreMinimal.h"
#include "LadderStateChangedSignatureDelegate.generated.h"

class ALadder;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLadderStateChangedSignature, ALadder*, Ladder, bool, bEnabled);

