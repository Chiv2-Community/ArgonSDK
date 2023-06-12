#pragma once
#include "CoreMinimal.h"
#include "OnTextChangedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnTextChangedDynamic, const FText&, Text);

