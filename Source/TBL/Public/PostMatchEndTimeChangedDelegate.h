#pragma once
#include "CoreMinimal.h"
#include "PostMatchEndTimeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPostMatchEndTimeChanged, float, Time);

