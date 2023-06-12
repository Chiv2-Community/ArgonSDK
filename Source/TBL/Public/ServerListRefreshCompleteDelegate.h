#pragma once
#include "CoreMinimal.h"
#include "EServerListType.h"
#include "ServerListRefreshCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FServerListRefreshComplete, bool, bSuccess, EServerListType, SearchType);

