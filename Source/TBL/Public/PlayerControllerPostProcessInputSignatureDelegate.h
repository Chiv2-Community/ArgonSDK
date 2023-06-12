#pragma once
#include "CoreMinimal.h"
#include "PlayerControllerPostProcessInputSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerControllerPostProcessInputSignature, const float, DeltaTime, const bool, bGamePaused);

