#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "OnRoundWonByDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoundWonBy, EFaction, Winners);

