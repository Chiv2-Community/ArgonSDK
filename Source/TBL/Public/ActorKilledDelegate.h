#pragma once
#include "CoreMinimal.h"
#include "ActorKilledDelegate.generated.h"

class AActor;
class AController;
class UDamageSource;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FActorKilled, AController*, Killer, AActor*, Killed, UDamageSource*, DamageSource);

