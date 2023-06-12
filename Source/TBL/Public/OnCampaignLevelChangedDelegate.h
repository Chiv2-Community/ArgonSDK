#pragma once
#include "CoreMinimal.h"
#include "OnCampaignLevelChangedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCampaignLevelChanged, UObject*, Campaign, int32, Level);

