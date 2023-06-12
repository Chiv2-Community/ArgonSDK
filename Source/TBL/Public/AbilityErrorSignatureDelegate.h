#pragma once
#include "CoreMinimal.h"
#include "EResultCode.h"
#include "Templates/SubclassOf.h"
#include "AbilityErrorSignatureDelegate.generated.h"

class AAbilityInvocation;
class AActor;
class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FAbilityErrorSignature, AActor*, Initiator, TEnumAsByte<EResultCode::Type>, Code, AAbilityInvocation*, Invocation, FName, AttackName, TSubclassOf<AInventoryItem>, ItemClass);

