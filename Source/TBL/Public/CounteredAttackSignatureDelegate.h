#pragma once
#include "CoreMinimal.h"
#include "EDefenderBlockedPolicy.h"
#include "CounteredAttackSignatureDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCounteredAttackSignature, const EDefenderBlockedPolicy, BlockPolicy, ATBLCharacter*, AttackingCharacter);

