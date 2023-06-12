#pragma once
#include "CoreMinimal.h"
#include "DebugInputCharDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDebugInputChar, const FString&, Unicode);

