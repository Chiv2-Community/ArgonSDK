#pragma once
#include "CoreMinimal.h"
#include "InteractableComponentOnInteractableReachableSignatureDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractableComponentOnInteractableReachableSignature, APawn*, Pawn);

