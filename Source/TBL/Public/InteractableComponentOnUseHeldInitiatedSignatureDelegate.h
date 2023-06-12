#pragma once
#include "CoreMinimal.h"
#include "InteractableComponentOnUseHeldInitiatedSignatureDelegate.generated.h"

class APawn;
class UInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractableComponentOnUseHeldInitiatedSignature, APawn*, Pawn, UInteractableComponent*, Interactable);

