#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "OwningTeamChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOwningTeamChanged, EFaction, NewOwningTeam);

