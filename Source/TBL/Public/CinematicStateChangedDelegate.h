#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CinematicStateChangedDelegate.generated.h"

class UCinematicState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCinematicStateChanged, FGameplayTag, PreviousStateTag, UCinematicState*, PreviousState, FGameplayTag, NewStateTag, UCinematicState*, NewState);

