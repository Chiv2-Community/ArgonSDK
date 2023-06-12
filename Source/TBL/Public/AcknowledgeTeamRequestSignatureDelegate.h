#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "AcknowledgeTeamRequestSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAcknowledgeTeamRequestSignature, bool, bSuccess, EFaction, Faction);

