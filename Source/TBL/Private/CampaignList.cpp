#include "CampaignList.h"
#include "Net/UnrealNetwork.h"

TScriptInterface<ICampaign> UCampaignList::SlotCampaign(TScriptInterface<ICampaign> Campaign) {
    return NULL;
}

void UCampaignList::ServerSetActiveCampaign_Implementation(const FString& ID, const FString& FriendlyName, int32 TotalXp, int32 RevisionXp, bool bIsPurchased) {
}
bool UCampaignList::ServerSetActiveCampaign_Validate(const FString& ID, const FString& FriendlyName, int32 TotalXp, int32 RevisionXp, bool bIsPurchased) {
    return true;
}

void UCampaignList::OnTimedCampaignStatusChanged(UCampaignImpl* Campaign) {
}

void UCampaignList::OnReady(FOnCampaignsChangedDelegate NewOnReady) {
}

void UCampaignList::OnCampaignXpChanged(UObject* Campaign, int32 Xp) {
}

void UCampaignList::OnCampaignPurchasedChanged(UObject* Campaign, bool bIsPurchased) {
}

void UCampaignList::OnCampaignLevelChanged(UObject* Campaign, int32 Level) {
}

void UCampaignList::OnCampaignCompleted(UObject* Campaign) {
}

bool UCampaignList::IsCampaignActive(TScriptInterface<ICampaign> Campaign) const {
    return false;
}

TArray<TScriptInterface<ICampaign>> UCampaignList::GetOwnedCampaigns() {
    return TArray<TScriptInterface<ICampaign>>();
}

TScriptInterface<ICampaign> UCampaignList::GetCampaignWithId(const FString& ID) {
    return NULL;
}

TScriptInterface<ICampaign> UCampaignList::GetCampaignIdFromItemAssetId(const FPrimaryAssetId& ItemId) {
    return NULL;
}

TScriptInterface<ICampaign> UCampaignList::GetCampaignForStoreOffer(const FString& StoreOfferId) {
    return NULL;
}

TScriptInterface<ICampaign> UCampaignList::GetCampaignForPremiumGood(const FPrimaryAssetId& PremiumGoodId) {
    return NULL;
}

TArray<TScriptInterface<ICampaign>> UCampaignList::GetAllCampaigns() const {
    return TArray<TScriptInterface<ICampaign>>();
}

TArray<TScriptInterface<ICampaign>> UCampaignList::GetActiveCampaigns() {
    return TArray<TScriptInterface<ICampaign>>();
}

void UCampaignList::FixPurchasedCampaignStateIfNeeded(TScriptInterface<ICampaignPurchasable> PurchasableCampaign) {
}

void UCampaignList::AbandonCampaign(UObject* CampaignObject) {
}

void UCampaignList::AbandonAllCampaigns() {
}

void UCampaignList::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCampaignList, AllCampaigns_New);
}

UCampaignList::UCampaignList() {
}

