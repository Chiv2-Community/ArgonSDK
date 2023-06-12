#pragma once
#include "CoreMinimal.h"
#include "EDefenderBlockedPolicy.h"
#include "BlockedAttackSignatureDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBlockedAttackSignature, const EDefenderBlockedPolicy, BlockPolicy, ATBLCharacter*, AttackingCharacter, const bool, bWasProjectile);

