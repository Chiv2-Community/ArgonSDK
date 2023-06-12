#pragma once
#include "CoreMinimal.h"
#include "TeamChangedSignatureDelegate.generated.h"

class ATBLTeam;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTeamChangedSignature, ATBLTeam*, NewTeam);

