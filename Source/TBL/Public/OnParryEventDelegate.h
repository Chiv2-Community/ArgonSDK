#pragma once
#include "CoreMinimal.h"
#include "ParryEventState.h"
#include "OnParryEventDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnParryEvent, ATBLCharacter*, ThisCharacter, ATBLCharacter*, OtherCharacter, FParryEventState, ParryEventState);

