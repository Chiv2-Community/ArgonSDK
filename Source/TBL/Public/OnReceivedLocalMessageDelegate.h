#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnReceivedLocalMessageDelegate.generated.h"

class APlayerState;
class ULocalMessage;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnReceivedLocalMessage, TSubclassOf<ULocalMessage>, Message, int32, Switch, APlayerState*, PlayerStateA, APlayerState*, PlayerStateB, UObject*, Object);

