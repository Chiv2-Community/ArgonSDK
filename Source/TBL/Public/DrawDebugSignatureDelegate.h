#pragma once
#include "CoreMinimal.h"
#include "DrawDebugSignatureDelegate.generated.h"

class UCanvas;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDrawDebugSignature, UCanvas*, Canvas);

