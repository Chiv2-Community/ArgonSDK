#pragma once
#include "CoreMinimal.h"
#include "EChatType.h"
#include "EnterInputModeSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnterInputModeSignature, TEnumAsByte<EChatType::Type>, InChatType);

