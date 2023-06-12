#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "ServerPingedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FServerPinged, FBlueprintSessionResult, SessionResult);

