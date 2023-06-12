#include "TBLCampaignsCachedData.h"

void UTBLCampaignsCachedData::InitFromActiveCampaigns(UCampaignList* InCampaignList) {
}

bool UTBLCampaignsCachedData::HasSameData(const FCampaignCacheData& CachedData, TScriptInterface<ICampaign> Campaign) {
    return false;
}

bool UTBLCampaignsCachedData::GetCachedData(TScriptInterface<ICampaign> InCampaign, FCampaignCacheData& OutData) const {
    return false;
}

float UTBLCampaignsCachedData::GetCachedCampaignDataProgress(const FCampaignCacheData& CachedData, TScriptInterface<ICampaign> Campaign) {
    return 0.0f;
}

bool UTBLCampaignsCachedData::GetCachedCampaignComplete(const FCampaignCacheData& CachedData, TScriptInterface<ICampaign> Campaign) {
    return false;
}

UTBLCampaignsCachedData::UTBLCampaignsCachedData() {
}

