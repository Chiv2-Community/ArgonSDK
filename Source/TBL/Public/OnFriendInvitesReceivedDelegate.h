#pragma once
#include "CoreMinimal.h"
#include "OnFriendInvitesReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFriendInvitesReceived, const FString&, UserId, const FString&, DisplayName);

