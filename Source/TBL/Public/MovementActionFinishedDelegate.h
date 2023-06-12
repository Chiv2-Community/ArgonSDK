#pragma once
#include "CoreMinimal.h"
#include "MovementActionFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMovementActionFinished, FName, MovementName);

