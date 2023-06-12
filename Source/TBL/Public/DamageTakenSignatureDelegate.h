#pragma once
#include "CoreMinimal.h"
#include "DamageTakenEvent.h"
#include "DamageTakenSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDamageTakenSignature, const FDamageTakenEvent&, Event);

