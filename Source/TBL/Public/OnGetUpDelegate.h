#pragma once
#include "CoreMinimal.h"
#include "OnGetUpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetUp, FName, Direction);

