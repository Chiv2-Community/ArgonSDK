#pragma once
#include "CoreMinimal.h"
#include "LandedResult.h"
#include "HorseLandedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHorseLandedSignature, const FLandedResult&, LandedResult);

