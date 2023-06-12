#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EHorseImpactLocation.h"
#include "EHorseToWorldImpactType.h"
#include "OnHorseToWorldImpactDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnHorseToWorldImpact, FHitResult, Hit, EHorseImpactLocation, ImpactLocation, EHorseToWorldImpactType, ImpactType, FName, ImpactCombatState, float, ImpactSpeed);

