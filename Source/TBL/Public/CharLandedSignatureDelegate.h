#pragma once
#include "CoreMinimal.h"
#include "LandedResult.h"
#include "CharLandedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharLandedSignature, const FLandedResult&, LandedResult);

