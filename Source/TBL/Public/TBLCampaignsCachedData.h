#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CampaignCacheData.h"
#include "TBLCampaignsCachedData.generated.h"

class ICampaign;
class UCampaign;
class UCampaignList;

UCLASS(Blueprintable)
class UTBLCampaignsCachedData : public UObject {
    GENERATED_BODY()
public:
    UTBLCampaignsCachedData();
    UFUNCTION(BlueprintCallable)
    void InitFromActiveCampaigns(UCampaignList* InCampaignList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasSameData(const FCampaignCacheData& CachedData, TScriptInterface<ICampaign> Campaign);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCachedData(TScriptInterface<ICampaign> InCampaign, FCampaignCacheData& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCachedCampaignDataProgress(const FCampaignCacheData& CachedData, TScriptInterface<ICampaign> Campaign);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCachedCampaignComplete(const FCampaignCacheData& CachedData, TScriptInterface<ICampaign> Campaign);
    
};

