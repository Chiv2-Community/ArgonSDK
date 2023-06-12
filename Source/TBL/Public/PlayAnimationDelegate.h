#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayAnimation, FName, Animation);

