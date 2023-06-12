#pragma once
#include "CoreMinimal.h"
#include "DeathDamageTakenEvent.h"
#include "BreakableOnKilledSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakableOnKilledSignature, const FDeathDamageTakenEvent&, Event);

