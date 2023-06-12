#pragma once
#include "CoreMinimal.h"
#include "OnCombatStateEndSignatureDelegate.generated.h"

class AInventoryItem;
class UCombatState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCombatStateEndSignature, const FName&, State, AInventoryItem*, AttackingWeapon, UCombatState*, InCombatState);

