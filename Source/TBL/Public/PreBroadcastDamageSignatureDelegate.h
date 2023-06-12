#pragma once
#include "CoreMinimal.h"
#include "DamageTakenEvent.h"
#include "PreBroadcastDamageSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreBroadcastDamageSignature, const FDamageTakenEvent&, DamageTakenEvent);

