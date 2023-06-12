#pragma once
#include "CoreMinimal.h"
#include "OnCampaignsChangedDelegateDelegate.generated.h"

class UCampaignList;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCampaignsChangedDelegate, UCampaignList*, List);

