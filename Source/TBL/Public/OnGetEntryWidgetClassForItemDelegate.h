#pragma once
#include "CoreMinimal.h"
#include "BlueprintOnlineUser.h"
#include "Templates/SubclassOf.h"
#include "OnGetEntryWidgetClassForItemDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(TSubclassOf<UUserWidget>, FOnGetEntryWidgetClassForItem, const FBlueprintOnlineUser&, Item);

