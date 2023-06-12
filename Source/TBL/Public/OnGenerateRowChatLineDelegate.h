#pragma once
#include "CoreMinimal.h"
#include "ChatLine.h"
#include "OnGenerateRowChatLineDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnGenerateRowChatLine, FChatLine, Item);

