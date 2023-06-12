#pragma once
#include "CoreMinimal.h"
#include "OnCounterWindowDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCounterWindow, ATBLCharacter*, Character);

