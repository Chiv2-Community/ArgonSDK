#pragma once
#include "CoreMinimal.h"
#include "EHorseImpactLocation.h"
#include "EHorseToCharacterImpactType.h"
#include "OnHorseToCharacterImpactDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnHorseToCharacterImpact, ATBLCharacter*, TargetCharacter, EHorseImpactLocation, ImpactLocation, EHorseToCharacterImpactType, ImpactType, FName, ImpactCombatState, float, ImpactSpeed);

