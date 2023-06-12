#pragma once
#include "CoreMinimal.h"
#include "ScoreEventStruct.h"
#include "OnGenerateScoreRowDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnGenerateScoreRow, FScoreEventStruct, ScoreEvent);

