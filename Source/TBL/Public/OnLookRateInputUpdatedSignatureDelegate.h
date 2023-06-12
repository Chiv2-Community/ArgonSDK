#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnLookRateInputUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLookRateInputUpdatedSignature, const TEnumAsByte<EAxis::Type>, Axis, const float, Rate);

