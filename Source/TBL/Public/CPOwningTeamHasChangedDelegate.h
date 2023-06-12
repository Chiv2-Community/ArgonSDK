#pragma once
#include "CoreMinimal.h"
#include "CPOwningTeamHasChangedDelegate.generated.h"

class ATBLTeam;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCPOwningTeamHasChanged, ATBLTeam*, Team);

