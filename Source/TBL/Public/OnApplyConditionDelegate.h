#pragma once
#include "CoreMinimal.h"
#include "EConditionType.h"
#include "OnApplyConditionDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnApplyCondition, AActor*, Actor, EConditionType, Condition);

