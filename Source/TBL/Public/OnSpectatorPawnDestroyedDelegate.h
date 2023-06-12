#pragma once
#include "CoreMinimal.h"
#include "OnSpectatorPawnDestroyedDelegate.generated.h"

class ATBLPlayerController;
class ATBLSpectatorPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpectatorPawnDestroyed, ATBLPlayerController*, PlayerController, ATBLSpectatorPawn*, SpectatorPawn);

