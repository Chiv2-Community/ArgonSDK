#pragma once
#include "CoreMinimal.h"
#include "DamageTakenEvent.h"
#include "BreakableOnDamageTakenSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakableOnDamageTakenSignature, const FDamageTakenEvent&, Event);

