#pragma once
#include "CoreMinimal.h"
#include "TBLCampaignSettings.generated.h"

USTRUCT(BlueprintType)
struct FTBLCampaignSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString ActiveCampaignId;
    
    TBL_API FTBLCampaignSettings();
};

