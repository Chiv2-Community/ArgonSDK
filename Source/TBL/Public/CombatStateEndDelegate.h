#pragma once
#include "CoreMinimal.h"
#include "AttackInfo.h"
#include "CombatStateEndDelegate.generated.h"

class AActor;
class UCombatState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCombatStateEnd, AActor*, Actor, FName, State, const FAttackInfo&, EventAttackInfo, UCombatState*, CombatState);

