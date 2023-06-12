#pragma once
#include "CoreMinimal.h"
#include "OnPartyMemberJoinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPartyMemberJoin, const FString&, UserId, const FString&, DisplayName);

