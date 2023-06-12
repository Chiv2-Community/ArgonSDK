#pragma once
#include "CoreMinimal.h"
#include "InteractableComponentCanShowUIDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FInteractableComponentCanShowUI, APawn*, Pawn);

