#pragma once
#include "CoreMinimal.h"
#include "OnCampaignLevelChangedMulticastDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCampaignLevelChangedMulticast, UObject*, Campaign, int32, Level);

