#pragma once
#include "CoreMinimal.h"
#include "OnEpicAccountLinkingCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEpicAccountLinkingComplete, bool, bSuccess);

