#pragma once
#include "CoreMinimal.h"
#include "OnPlayerRevivedDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerRevived, APawn*, RevivingActor);

