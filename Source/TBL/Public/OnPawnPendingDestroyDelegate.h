#pragma once
#include "CoreMinimal.h"
#include "OnPawnPendingDestroyDelegate.generated.h"

class APawn;
class ATBLAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPawnPendingDestroy, ATBLAIController*, Controller, APawn*, Pawn);

