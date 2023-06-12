#pragma once
#include "CoreMinimal.h"
#include "EpicEndGameState.h"
#include "StartEpicEndGameEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartEpicEndGameEventSignature, FEpicEndGameState, EndGameState);

