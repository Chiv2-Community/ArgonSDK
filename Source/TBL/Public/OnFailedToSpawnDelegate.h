#pragma once
#include "CoreMinimal.h"
#include "OnFailedToSpawnDelegate.generated.h"

class ATBLAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFailedToSpawn, ATBLAIController*, Controller);

