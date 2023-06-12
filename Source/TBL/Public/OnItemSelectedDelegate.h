#pragma once
#include "CoreMinimal.h"
#include "OnItemSelectedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemSelected, UObject*, ItemSelected);

