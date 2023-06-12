#pragma once
#include "CoreMinimal.h"
#include "OnGenerateEntryDelegate.generated.h"

class UDropDownListItem;
class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnGenerateEntry, UDropDownListItem*, DropDownItem);

