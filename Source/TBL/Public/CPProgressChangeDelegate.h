#pragma once
#include "CoreMinimal.h"
#include "CPProgressChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCPProgressChange, float, Progress);

