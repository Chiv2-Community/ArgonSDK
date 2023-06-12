#pragma once
#include "CoreMinimal.h"
#include "InitialAutorunExpiredSignatureDelegate.generated.h"

class UTBLCharacterMovementBaseComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInitialAutorunExpiredSignature, UTBLCharacterMovementBaseComponent*, MovementComponent);

