#pragma once
#include "CoreMinimal.h"
#include "AttackInfo.h"
#include "CombatStateChangedDelegate.generated.h"

class AActor;
class UCombatState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FCombatStateChanged, AActor*, Actor, FName, PreviousState, FName, NewState, const FAttackInfo&, EventAttackInfo, UCombatState*, CombatState);

