#pragma once
#include "CoreMinimal.h"
#include "OnHealingAppliedToCharacterDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealingAppliedToCharacter, ACharacter*, ReceivingCharacter);

