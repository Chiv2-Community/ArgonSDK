#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnLookInputUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLookInputUpdatedSignature, const TEnumAsByte<EAxis::Type>, Axis, const float, Value);

