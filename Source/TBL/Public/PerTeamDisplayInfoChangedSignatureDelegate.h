#pragma once
#include "CoreMinimal.h"
#include "PerTeamDisplayInfoChangedSignatureDelegate.generated.h"

class UHudMarkerDisplayComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPerTeamDisplayInfoChangedSignature, UHudMarkerDisplayComponent*, HUDMarkerComponent);

