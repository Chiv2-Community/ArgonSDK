#pragma once
#include "CoreMinimal.h"
#include "DamageTakenEvent.h"
#include "CausedDamageSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCausedDamageSignature, const FDamageTakenEvent&, Event);

