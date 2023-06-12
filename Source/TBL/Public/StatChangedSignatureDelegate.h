#pragma once
#include "CoreMinimal.h"
#include "StatChangedSignatureDelegate.generated.h"

class AActor;
class UDamageSource;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStatChangedSignature, float, Amount, UDamageSource*, DamageSource, AActor*, Initiator);

