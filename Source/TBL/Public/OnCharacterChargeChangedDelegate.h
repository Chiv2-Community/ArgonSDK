#pragma once
#include "CoreMinimal.h"
#include "OnCharacterChargeChangedDelegate.generated.h"

class ACharacterMountableActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterChargeChanged, ACharacterMountableActor*, MountedActor, float, Charge);

