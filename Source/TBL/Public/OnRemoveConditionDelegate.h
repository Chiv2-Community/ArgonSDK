#pragma once
#include "CoreMinimal.h"
#include "EConditionType.h"
#include "OnRemoveConditionDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRemoveCondition, AActor*, Actor, EConditionType, Condition, AActor*, ConditionRemover);

