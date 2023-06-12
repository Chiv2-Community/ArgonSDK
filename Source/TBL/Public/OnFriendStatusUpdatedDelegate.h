#pragma once
#include "CoreMinimal.h"
#include "OnFriendStatusUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFriendStatusUpdated, const FString&, UserId, const FString&, DisplayName, bool, IsOnline);

