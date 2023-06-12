#pragma once
#include "CoreMinimal.h"
#include "InteractableComponentOnUseSignatureDelegate.generated.h"

class APawn;
class UInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractableComponentOnUseSignature, APawn*, Pawn, UInteractableComponent*, Interactable);

