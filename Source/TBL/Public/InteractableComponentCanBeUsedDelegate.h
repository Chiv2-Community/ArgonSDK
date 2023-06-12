#pragma once
#include "CoreMinimal.h"
#include "InteractableComponentCanBeUsedDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FInteractableComponentCanBeUsed, APawn*, Pawn);

