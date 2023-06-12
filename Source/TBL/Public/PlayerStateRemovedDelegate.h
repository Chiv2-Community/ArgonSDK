#pragma once
#include "CoreMinimal.h"
#include "PlayerStateRemovedDelegate.generated.h"

class ATBLPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerStateRemoved, ATBLPlayerState*, PlayerState);

