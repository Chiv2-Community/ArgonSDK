#pragma once
#include "CoreMinimal.h"
#include "OnCampaignListReadyDelegate.generated.h"

class UCampaignList;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCampaignListReady, UCampaignList*, List);

