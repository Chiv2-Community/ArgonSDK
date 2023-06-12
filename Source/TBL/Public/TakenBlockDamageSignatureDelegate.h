#pragma once
#include "CoreMinimal.h"
#include "DamageTakenEvent.h"
#include "TakenBlockDamageSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTakenBlockDamageSignature, const FDamageTakenEvent&, Event);

