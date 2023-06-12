#pragma once
#include "CoreMinimal.h"
#include "NextSpawnTeamChangedSignatureDelegate.generated.h"

class ATBLTeam;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNextSpawnTeamChangedSignature, ATBLTeam*, NextSpawnTeam);

