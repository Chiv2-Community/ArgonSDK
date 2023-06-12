#pragma once
#include "CoreMinimal.h"
#include "StreamEntry.h"
#include "OnGenerateRowStreamEntryDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnGenerateRowStreamEntry, FStreamEntry, Item);

