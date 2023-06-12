#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PurchaseItemCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPurchaseItemCompleted, bool, WasPurchaseSuccessful, const TArray<FPrimaryAssetId>&, AssetIds);

