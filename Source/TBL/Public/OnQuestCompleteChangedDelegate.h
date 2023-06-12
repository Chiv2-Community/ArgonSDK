#pragma once
#include "CoreMinimal.h"
#include "OnQuestCompleteChangedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQuestCompleteChanged, UObject*, Quest);

