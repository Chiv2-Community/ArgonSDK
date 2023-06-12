#pragma once
#include "CoreMinimal.h"
#include "BlueprintButtonActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FBlueprintButtonAction, int32, ButtonIndex);

