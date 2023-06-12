#pragma once
#include "CoreMinimal.h"
#include "EServerListType.h"
#include "ServerListReadyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FServerListReady, bool, bSuccess, EServerListType, SearchType);

