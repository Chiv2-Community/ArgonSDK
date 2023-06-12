#pragma once
#include "CoreMinimal.h"
#include "ECharacterSignificanceLevel.h"
#include "OnSignificanceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSignificanceChanged, ECharacterSignificanceLevel, Significance);

