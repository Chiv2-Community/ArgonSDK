#pragma once
#include "CoreMinimal.h"
#include "InteractableComponentOnInteractableLostFocusSignatureDelegate.generated.h"

class APawn;
class UInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractableComponentOnInteractableLostFocusSignature, APawn*, Pawn, UInteractableComponent*, Interactable);

