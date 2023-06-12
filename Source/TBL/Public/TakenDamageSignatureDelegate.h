#pragma once
#include "CoreMinimal.h"
#include "DamageTakenEvent.h"
#include "TakenDamageSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTakenDamageSignature, const FDamageTakenEvent&, Event);

