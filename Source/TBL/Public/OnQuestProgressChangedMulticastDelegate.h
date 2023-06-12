#pragma once
#include "CoreMinimal.h"
#include "OnQuestProgressChangedMulticastDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestProgressChangedMulticast, UObject*, Quest, float, Progress);

