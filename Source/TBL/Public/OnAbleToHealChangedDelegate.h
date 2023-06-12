#pragma once
#include "CoreMinimal.h"
#include "OnAbleToHealChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbleToHealChanged, bool, bAbleToHeal);

