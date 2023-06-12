#pragma once
#include "CoreMinimal.h"
#include "EInviteSendOutcome.h"
#include "OnFriendInviteSentDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFriendInviteSent, bool, bSuccess, EInviteSendOutcome, Outcome);

