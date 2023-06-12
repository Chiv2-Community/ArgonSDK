#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "OnClientPreTravelDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnClientPreTravel, const FString&, PendingURL, TEnumAsByte<ETravelType>, TravelType, bool, bIsSeamlessTravel);

