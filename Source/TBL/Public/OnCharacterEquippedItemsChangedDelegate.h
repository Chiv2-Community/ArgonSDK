#pragma once
#include "CoreMinimal.h"
#include "OnCharacterEquippedItemsChangedDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterEquippedItemsChanged, ATBLCharacter*, Character);

