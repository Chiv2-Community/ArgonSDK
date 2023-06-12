#pragma once
#include "CoreMinimal.h"
#include "DamageTakenEvent.h"
#include "PostDamageEventInfo.h"
#include "PostDamageTakenSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPostDamageTakenSignature, const FDamageTakenEvent&, Event, const FPostDamageEventInfo&, PostDamageInfo);

