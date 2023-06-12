#pragma once
#include "CoreMinimal.h"
#include "OnMeleeSuccessDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMeleeSuccess, ATBLCharacter*, HitCharacter);

