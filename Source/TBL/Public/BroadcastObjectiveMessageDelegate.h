#pragma once
#include "CoreMinimal.h"
#include "ObjectiveMessage.h"
#include "BroadcastObjectiveMessageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBroadcastObjectiveMessage, const FObjectiveMessage&, Message);

