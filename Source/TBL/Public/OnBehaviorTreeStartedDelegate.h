#pragma once
#include "CoreMinimal.h"
#include "OnBehaviorTreeStartedDelegate.generated.h"

class ATBLAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBehaviorTreeStarted, ATBLAIController*, Controller);

