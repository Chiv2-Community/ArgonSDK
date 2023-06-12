#pragma once
#include "CoreMinimal.h"
#include "CPTickEventDelegate.generated.h"

class ATBLTeam;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCPTickEvent, ATBLTeam*, Team);

