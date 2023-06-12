#pragma once
#include "CoreMinimal.h"
#include "OnRepCharacterPlayerStateDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRepCharacterPlayerState, APlayerState*, PlayerState);

