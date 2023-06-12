#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CampaignDevSettings.generated.h"

class UCampaignImpl;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UCampaignDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UCampaignImpl>> HardcodedOwnedCampaigns;
    
    UCampaignDevSettings();
};

