#pragma once
#include "CoreMinimal.h"
#include "BombardStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBombardStateChanged, uint8, BombardState, uint8, PreviousState);

