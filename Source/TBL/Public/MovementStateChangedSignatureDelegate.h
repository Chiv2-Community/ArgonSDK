#pragma once
#include "CoreMinimal.h"
#include "MovementStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMovementStateChangedSignature, FName, MovementState);

