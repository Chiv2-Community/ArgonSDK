#pragma once
#include "CoreMinimal.h"
#include "PawnRevivedDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPawnRevived, APawn*, RevivedActor, APawn*, RevivorActor);

