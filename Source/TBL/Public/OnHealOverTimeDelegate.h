#pragma once
#include "CoreMinimal.h"
#include "EHealingSource.h"
#include "OnHealOverTimeDelegate.generated.h"

class ATBLPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealOverTime, EHealingSource, HealingSource, const ATBLPlayerState*, InstigatorPlayerState);

