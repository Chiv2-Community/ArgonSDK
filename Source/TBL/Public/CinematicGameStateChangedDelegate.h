#pragma once
#include "CoreMinimal.h"
#include "ECinematicGameState.h"
#include "CinematicGameStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCinematicGameStateChanged, ECinematicGameState, State);

