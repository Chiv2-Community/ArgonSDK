#pragma once
#include "CoreMinimal.h"
#include "OnnLocalPlayerPartyInviteResponseReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnnLocalPlayerPartyInviteResponseReceived, const FString&, UserId, const FString&, SenderName, uint8, Response);

