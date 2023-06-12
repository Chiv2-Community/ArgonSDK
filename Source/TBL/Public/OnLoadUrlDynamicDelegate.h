#pragma once
#include "CoreMinimal.h"
#include "OnLoadUrlDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_ThreeParams(bool, FOnLoadUrlDynamic, const FString&, Method, const FString&, URL, FString&, Response);

