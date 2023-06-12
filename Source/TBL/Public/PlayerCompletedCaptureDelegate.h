#pragma once
#include "CoreMinimal.h"
#include "PlayerCompletedCaptureDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCompletedCapture, ATBLCharacter*, Character);

