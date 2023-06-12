#pragma once
#include "CoreMinimal.h"
#include "AIUsingInteractableDelegate.generated.h"

class UInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIUsingInteractable, UInteractableComponent*, InteractableUsed);

