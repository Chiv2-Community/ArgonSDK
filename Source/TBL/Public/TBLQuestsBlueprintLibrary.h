#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Styling/SlateBrush.h"
#include "CampaignLevel.h"
#include "ETBLRarity.h"
#include "OnCampaignListReadyDelegate.h"
#include "QuestReward.h"
#include "TBLQuestsBlueprintLibrary.generated.h"

class APlayerController;
class ICampaign;
class UCampaign;
class ICampaignPurchasable;
class UCampaignPurchasable;
class UObject;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class UTBLQuestsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTBLQuestsBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void OnCampaignListReady(APlayerController* PC, FOnCampaignListReady NewOnCampaignListReady);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStoreOfferIdCampaign(const FString& OfferId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPrimaryAssetIdCampaign(const FPrimaryAssetId& PrimaryAssetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCampaignOwned(TScriptInterface<ICampaignPurchasable> Campaign, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FQuestReward> GetUnlockedRewardsForCampaignLevel(TScriptInterface<ICampaign> Campaign, int32 Level, bool CheckPremiumPurchase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetTextureFromSlateBrush(const FSlateBrush& Brush);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETBLRarity GetRewardItemRarity(const FPrimaryAssetId& PrimaryAssetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetQuestsEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetCampaignsEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetCampaignPurchasingEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CampaignLevelHasPremiumReward(const FCampaignLevel& Level);
    
};

