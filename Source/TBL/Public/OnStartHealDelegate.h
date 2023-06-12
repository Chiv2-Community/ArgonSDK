#pragma once
#include "CoreMinimal.h"
#include "EHealingSource.h"
#include "OnStartHealDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartHeal, AActor*, Actor, EHealingSource, HealingSource);

