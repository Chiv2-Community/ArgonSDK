#pragma once
#include "CoreMinimal.h"
#include "EHorseImpactLocation.h"
#include "EHorseToHorseImpactType.h"
#include "OnHorseToHorseImpactDelegate.generated.h"

class AHorse;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnHorseToHorseImpact, AHorse*, TargetHorse, EHorseImpactLocation, ImpactLocation, EHorseToHorseImpactType, ImpactType, FName, ImpactCombatState, float, ImpactSpeed);

