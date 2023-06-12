#pragma once
#include "CoreMinimal.h"
#include "CrosshairMsg.h"
#include "BroadcastCrosshairMessageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBroadcastCrosshairMessage, const FCrosshairMsg&, Message);

