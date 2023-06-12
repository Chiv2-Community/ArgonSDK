#pragma once
#include "CoreMinimal.h"
#include "OnTimedQuestStatusChangedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnTimedQuestStatusChanged, UObject*, Quest, bool, bBecameAvailable);

