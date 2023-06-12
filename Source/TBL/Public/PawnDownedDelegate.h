#pragma once
#include "CoreMinimal.h"
#include "PawnDownedDelegate.generated.h"

class AActor;
class APawn;
class UDamageSource;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPawnDowned, APawn*, DownedActor, AActor*, DamageCauser, UDamageSource*, DamageSource);

