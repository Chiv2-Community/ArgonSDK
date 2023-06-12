#pragma once
#include "CoreMinimal.h"
#include "OnInteractableFocusedDelegate.generated.h"

class UInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractableFocused, UInteractableComponent*, InteractableComponent);

