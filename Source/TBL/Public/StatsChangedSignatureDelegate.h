#pragma once
#include "CoreMinimal.h"
#include "EStat.h"
#include "StatEntry.h"
#include "StatsChangedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FStatsChangedSignature, AActor*, Actor, EStat, StatType, const FStatEntry&, Stat, float, DeltaValue);

