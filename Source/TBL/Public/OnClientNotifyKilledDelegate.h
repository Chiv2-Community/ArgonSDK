#pragma once
#include "CoreMinimal.h"
#include "EKillReason.h"
#include "OnClientNotifyKilledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClientNotifyKilled, EKillReason, Reason);

