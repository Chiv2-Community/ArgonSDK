#pragma once
#include "CoreMinimal.h"
#include "OnSetAttachedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetAttached, bool, bAttached);

