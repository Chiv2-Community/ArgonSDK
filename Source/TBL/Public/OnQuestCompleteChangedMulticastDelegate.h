#pragma once
#include "CoreMinimal.h"
#include "OnQuestCompleteChangedMulticastDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestCompleteChangedMulticast, UObject*, Quest);

