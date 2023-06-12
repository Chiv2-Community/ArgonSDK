#include "TBLQuestsBlueprintLibrary.h"

void UTBLQuestsBlueprintLibrary::OnCampaignListReady(APlayerController* PC, FOnCampaignListReady NewOnCampaignListReady) {
}

bool UTBLQuestsBlueprintLibrary::IsStoreOfferIdCampaign(const FString& OfferId) {
    return false;
}

bool UTBLQuestsBlueprintLibrary::IsPrimaryAssetIdCampaign(const FPrimaryAssetId& PrimaryAssetId) {
    return false;
}

bool UTBLQuestsBlueprintLibrary::IsCampaignOwned(TScriptInterface<ICampaignPurchasable> Campaign, UObject* WorldContextObject) {
    return false;
}

TArray<FQuestReward> UTBLQuestsBlueprintLibrary::GetUnlockedRewardsForCampaignLevel(TScriptInterface<ICampaign> Campaign, int32 Level, bool CheckPremiumPurchase) {
    return TArray<FQuestReward>();
}

UTexture2D* UTBLQuestsBlueprintLibrary::GetTextureFromSlateBrush(const FSlateBrush& Brush) {
    return NULL;
}

ETBLRarity UTBLQuestsBlueprintLibrary::GetRewardItemRarity(const FPrimaryAssetId& PrimaryAssetId) {
    return ETBLRarity::None;
}

bool UTBLQuestsBlueprintLibrary::GetQuestsEnabled(UObject* WorldContextObject) {
    return false;
}

bool UTBLQuestsBlueprintLibrary::GetCampaignsEnabled(UObject* WorldContextObject) {
    return false;
}

bool UTBLQuestsBlueprintLibrary::GetCampaignPurchasingEnabled(UObject* WorldContextObject) {
    return false;
}

bool UTBLQuestsBlueprintLibrary::CampaignLevelHasPremiumReward(const FCampaignLevel& Level) {
    return false;
}

UTBLQuestsBlueprintLibrary::UTBLQuestsBlueprintLibrary() {
}

