#pragma once
#include "CoreMinimal.h"
#include "OnPlayerKickedDelegate.generated.h"

class ATBLPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerKicked, ATBLPlayerController*, KickedPlayer);

