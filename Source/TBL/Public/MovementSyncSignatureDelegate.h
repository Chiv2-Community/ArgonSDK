#pragma once
#include "CoreMinimal.h"
#include "MovementSyncSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMovementSyncSignature, float, ClientTimeStamp, float, DeltaTime);

