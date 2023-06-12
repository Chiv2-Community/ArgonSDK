#pragma once
#include "CoreMinimal.h"
#include "EDismountType.h"
#include "OnDismountDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDismount, AActor*, AttachParent, EDismountType, DismountType);

