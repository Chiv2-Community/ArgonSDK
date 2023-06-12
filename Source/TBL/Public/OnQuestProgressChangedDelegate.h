#pragma once
#include "CoreMinimal.h"
#include "OnQuestProgressChangedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnQuestProgressChanged, UObject*, Quest, float, Progress);

