#pragma once
#include "CoreMinimal.h"
#include "OnBeforeBrowseDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FOnBeforeBrowseDynamic, const FString&, URL, bool, bIsRedirect);

