#pragma once
#include "CoreMinimal.h"
#include "OnPartyMemberLeaveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPartyMemberLeave, const FString&, UserId, const FString&, DisplayName);

