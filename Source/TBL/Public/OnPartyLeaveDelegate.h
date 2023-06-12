#pragma once
#include "CoreMinimal.h"
#include "OnPartyLeaveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartyLeave, const bool, Result);

