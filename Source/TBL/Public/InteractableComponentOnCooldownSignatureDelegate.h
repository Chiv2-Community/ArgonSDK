#pragma once
#include "CoreMinimal.h"
#include "InteractableComponentOnCooldownSignatureDelegate.generated.h"

class APawn;
class UInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInteractableComponentOnCooldownSignature, bool, IsOnCooldown, APawn*, Pawn, UInteractableComponent*, Interactable);

