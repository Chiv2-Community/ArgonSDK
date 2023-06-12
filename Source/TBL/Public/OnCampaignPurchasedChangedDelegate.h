#pragma once
#include "CoreMinimal.h"
#include "OnCampaignPurchasedChangedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCampaignPurchasedChanged, UObject*, Campaign, bool, bPurchased);

