#pragma once
#include "CoreMinimal.h"
#include "CrowdControlParams.h"
#include "CrowdControlNoDamageDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCrowdControlNoDamage, AActor*, Actor, FName, CombatState, FCrowdControlParams, CrowdControlParams);

