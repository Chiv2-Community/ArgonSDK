#pragma once
#include "CoreMinimal.h"
#include "InteractableComponentOnUsesChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractableComponentOnUsesChangedSignature, int32, UsesRemaining);

