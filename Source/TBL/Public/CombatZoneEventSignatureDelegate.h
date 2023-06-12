#pragma once
#include "CoreMinimal.h"
#include "CombatZoneEventSignatureDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCombatZoneEventSignature, ATBLCharacter*, Character);

