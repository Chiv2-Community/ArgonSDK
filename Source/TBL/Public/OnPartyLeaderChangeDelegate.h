#pragma once
#include "CoreMinimal.h"
#include "OnPartyLeaderChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPartyLeaderChange, const FString&, UserId, const FString&, DisplayName);

