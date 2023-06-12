#pragma once
#include "CoreMinimal.h"
#include "SpectatorSwitchSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpectatorSwitchSignature, bool, IsPlayerSpectator);

