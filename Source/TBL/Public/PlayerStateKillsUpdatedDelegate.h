#pragma once
#include "CoreMinimal.h"
#include "PlayerStateKillsUpdatedDelegate.generated.h"

class ATBLPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerStateKillsUpdated, ATBLPlayerState*, PlayerState, int32, Kills);

