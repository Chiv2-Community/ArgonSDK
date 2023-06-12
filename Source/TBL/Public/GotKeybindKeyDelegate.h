#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GotKeybindKeyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGotKeybindKey, FKey, Key);

