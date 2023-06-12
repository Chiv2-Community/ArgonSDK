#pragma once
#include "CoreMinimal.h"
#include "ChatLine.h"
#include "GetChatLineDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FChatLine, FGetChatLine);

