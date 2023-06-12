#pragma once
#include "CoreMinimal.h"
#include "CustomizationContext.h"
#include "OnCustomizationAppliedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomizationApplied, const FCustomizationContext&, Context);

