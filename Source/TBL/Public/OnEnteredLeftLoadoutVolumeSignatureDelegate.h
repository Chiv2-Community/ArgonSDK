#pragma once
#include "CoreMinimal.h"
#include "OnEnteredLeftLoadoutVolumeSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnteredLeftLoadoutVolumeSignature, bool, PlayerIsInLoadoutVolume);

