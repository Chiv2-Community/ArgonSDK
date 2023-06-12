#pragma once
#include "CoreMinimal.h"
#include "OnCarryableCharacterEventDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCarryableCharacterEvent, FName, EventName, ATBLCharacter*, ParentCharacter);

