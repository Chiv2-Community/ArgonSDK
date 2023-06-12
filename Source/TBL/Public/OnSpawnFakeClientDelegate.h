#pragma once
#include "CoreMinimal.h"
#include "OnSpawnFakeClientDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnFakeClient, AInventoryItem*, FakeClient);

