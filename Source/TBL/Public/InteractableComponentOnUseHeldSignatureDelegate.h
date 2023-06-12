#pragma once
#include "CoreMinimal.h"
#include "InteractableComponentOnUseHeldSignatureDelegate.generated.h"

class APawn;
class UInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInteractableComponentOnUseHeldSignature, APawn*, Pawn, float, UseTime, UInteractableComponent*, Interactable);

