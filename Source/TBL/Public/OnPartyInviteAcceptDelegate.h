#pragma once
#include "CoreMinimal.h"
#include "OnPartyInviteAcceptDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartyInviteAccept, const FString&, PartyId);

