#pragma once
#include "CoreMinimal.h"
#include "OnPartyMemberRemoveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPartyMemberRemove, const FString&, UserId, const FString&, DisplayName);

