#pragma once
#include "CoreMinimal.h"
#include "DeathDamageTakenEvent.h"
#include "KilledSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKilledSignature, const FDeathDamageTakenEvent&, Event);

