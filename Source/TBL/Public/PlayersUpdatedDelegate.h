#pragma once
#include "CoreMinimal.h"
#include "PlayersUpdatedDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayersUpdated, const TArray<ATBLCharacter*>, Players);

