#pragma once
#include "CoreMinimal.h"
#include "OnCampaignXpChangedMulticastDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCampaignXpChangedMulticast, UObject*, Campaign, int32, Xp);

