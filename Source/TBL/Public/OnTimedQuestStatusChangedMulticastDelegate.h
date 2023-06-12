#pragma once
#include "CoreMinimal.h"
#include "OnTimedQuestStatusChangedMulticastDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTimedQuestStatusChangedMulticast, UObject*, Quest, bool, bBecameAvailable);

