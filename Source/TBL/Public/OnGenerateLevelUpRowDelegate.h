#pragma once
#include "CoreMinimal.h"
#include "LevelUpResult.h"
#include "OnGenerateLevelUpRowDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnGenerateLevelUpRow, FLevelUpResult, LevelUpEvent);

