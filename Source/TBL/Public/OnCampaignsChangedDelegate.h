#pragma once
#include "CoreMinimal.h"
#include "OnCampaignsChangedDelegate.generated.h"

class UCampaignList;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCampaignsChanged, UCampaignList*, List);

