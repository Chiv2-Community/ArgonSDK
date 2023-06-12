#pragma once
#include "CoreMinimal.h"
#include "OnCampaignPurchasedChangedMulticastDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCampaignPurchasedChangedMulticast, UObject*, Campaign, bool, bPurchased);

