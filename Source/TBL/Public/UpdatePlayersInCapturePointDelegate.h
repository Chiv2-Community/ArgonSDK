#pragma once
#include "CoreMinimal.h"
#include "UpdatePlayersInCapturePointDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePlayersInCapturePoint, TArray<ATBLCharacter*>, Players);

