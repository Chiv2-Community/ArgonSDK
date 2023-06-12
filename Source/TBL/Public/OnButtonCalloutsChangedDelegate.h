#pragma once
#include "CoreMinimal.h"
#include "OnButtonCalloutsChangedDelegate.generated.h"

class UTBLScreenManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonCalloutsChanged, UTBLScreenManager*, ScreenManager);

