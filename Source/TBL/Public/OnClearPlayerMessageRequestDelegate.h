#pragma once
#include "CoreMinimal.h"
#include "OnClearPlayerMessageRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClearPlayerMessageRequest, int32, MessageId);

