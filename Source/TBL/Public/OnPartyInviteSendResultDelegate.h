#pragma once
#include "CoreMinimal.h"
#include "OnPartyInviteSendResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartyInviteSendResult, const bool, Result);

