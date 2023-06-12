#pragma once
#include "CoreMinimal.h"
#include "ObjectiveContextMessage.h"
#include "NewObjecitveContextMessageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewObjecitveContextMessage, FObjectiveContextMessage, ObjectiveContextMessage);

