#pragma once
#include "CoreMinimal.h"
#include "AttackInfo.h"
#include "CombatStateEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCombatStateEvent, AActor*, Actor, FName, EventName, const FAttackInfo&, EventAttackInfo);

