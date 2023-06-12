#pragma once
#include "CoreMinimal.h"
#include "OnRepPlayerStateDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRepPlayerState, APlayerState*, PlayerState);

