#pragma once
#include "CoreMinimal.h"
#include "OnStartedBehaviorTreeDelegate.generated.h"

class ATBLAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartedBehaviorTree, ATBLAIController*, Controller);

