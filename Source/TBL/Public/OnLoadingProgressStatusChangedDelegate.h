#pragma once
#include "CoreMinimal.h"
#include "OnLoadingProgressStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoadingProgressStatusChanged, bool, SearchInProgress);

