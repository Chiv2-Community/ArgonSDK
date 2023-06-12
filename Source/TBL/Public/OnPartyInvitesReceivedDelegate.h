#pragma once
#include "CoreMinimal.h"
#include "OnPartyInvitesReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPartyInvitesReceived, const FString&, UserId, const FString&, DisplayName);

