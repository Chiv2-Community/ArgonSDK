#pragma once
#include "CoreMinimal.h"
#include "InteractableComponentOnInteractableFocusedSignatureDelegate.generated.h"

class APawn;
class UInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractableComponentOnInteractableFocusedSignature, APawn*, Pawn, UInteractableComponent*, Interactable);

