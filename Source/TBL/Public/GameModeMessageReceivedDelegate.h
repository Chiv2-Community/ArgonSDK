#pragma once
#include "CoreMinimal.h"
#include "GameModeMessage.h"
#include "GameModeMessageReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameModeMessageReceived, const FGameModeMessage&, Message);

