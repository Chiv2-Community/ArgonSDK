#pragma once
#include "CoreMinimal.h"
#include "PlayerStateAddedDelegate.generated.h"

class ATBLPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerStateAdded, ATBLPlayerState*, PlayerState);

