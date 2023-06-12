#pragma once
#include "CoreMinimal.h"
#include "CleanupAbilityActorsDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCleanupAbilityActors, AController*, Controller);

