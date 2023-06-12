#pragma once
#include "CoreMinimal.h"
#include "HUDMarkerDisplayUpdateSignatureDelegate.generated.h"

class UHudMarkerDisplayComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHUDMarkerDisplayUpdateSignature, UHudMarkerDisplayComponent*, HudMarkerDisplayComponent);

