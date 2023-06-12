#pragma once
#include "CoreMinimal.h"
#include "EKillReason.h"
#include "OnClientNotifySuicideDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClientNotifySuicide, EKillReason, Reason);

