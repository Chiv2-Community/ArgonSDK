#pragma once
#include "CoreMinimal.h"
#include "ClashEventState.h"
#include "OnClashDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnClash, ATBLCharacter*, Initiator, ATBLCharacter*, Target, FClashEventState, ClashEventState);

