#pragma once
#include "CoreMinimal.h"
#include "OnCampaignXpChangedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCampaignXpChanged, UObject*, Campaign, int32, Xp);

