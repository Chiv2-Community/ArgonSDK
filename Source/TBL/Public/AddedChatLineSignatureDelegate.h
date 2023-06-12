#pragma once
#include "CoreMinimal.h"
#include "AddedChatLineSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddedChatLineSignature, bool, bInSetFocus);

