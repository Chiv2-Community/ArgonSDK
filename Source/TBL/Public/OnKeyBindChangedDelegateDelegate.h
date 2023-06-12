#pragma once
#include "CoreMinimal.h"
#include "OnKeyBindChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeyBindChangedDelegate, const FName, ActionName);

