#pragma once
#include "CoreMinimal.h"
#include "InteractableComponentOnInteractableUnreachableSignatureDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractableComponentOnInteractableUnreachableSignature, APawn*, Pawn);

