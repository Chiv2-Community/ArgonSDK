#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "AutoBalanceNotificationReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAutoBalanceNotificationReceived, EFaction, Faction);

