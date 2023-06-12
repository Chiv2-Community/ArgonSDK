#pragma once
#include "CoreMinimal.h"
#include "InteractableComponentOnUseReleasedSignatureDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractableComponentOnUseReleasedSignature, APawn*, Pawn, float, UseTime);

