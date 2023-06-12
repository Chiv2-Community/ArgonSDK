#pragma once
#include "CoreMinimal.h"
#include "AttackInfo.h"
#include "CombatStateBeginDelegate.generated.h"

class AActor;
class UCombatState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCombatStateBegin, AActor*, Actor, FName, State, const FAttackInfo&, EventAttackInfo, UCombatState*, CombatState);

