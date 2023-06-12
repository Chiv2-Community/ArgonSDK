#pragma once
#include "CoreMinimal.h"
#include "PushableEndPoint.h"
#include "OnPushableReachedEndPointDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPushableReachedEndPoint, int32, EndPointNum, FPushableEndPoint, EndPoint, bool, IsLastEndPoint);

