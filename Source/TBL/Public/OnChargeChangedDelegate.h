#pragma once
#include "CoreMinimal.h"
#include "OnChargeChangedDelegate.generated.h"

class ABatteringRam;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChargeChanged, ABatteringRam*, BatteringRam, float, Charge);

