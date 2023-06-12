#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "OnCampaignsChangedDelegate.h"
#include "OnCampaignsChangedDelegateDelegate.h"
#include "ReplicatedSubobjectInterface.h"
#include "CampaignList.generated.h"

class ICampaign;
class UCampaign;
class ICampaignPurchasable;
class UCampaignPurchasable;
class UCampaignImpl;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, Within=TBLPlayerController, meta=(BlueprintSpawnableComponent))
class UCampaignList : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCampaignsChanged OnCampaignsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCampaignsChanged OnActiveCampaignChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActiveCampaignId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<ICampaign>> AllCampaigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UCampaignImpl*> AllCampaigns_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ActiveCampaigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPrimaryAssetId, FString> PremiumCampaignMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPrimaryAssetId, FString> CampaignItemMap;
    
public:
    UCampaignList();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    TScriptInterface<ICampaign> SlotCampaign(TScriptInterface<ICampaign> Campaign);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetActiveCampaign(const FString& ID, const FString& FriendlyName, int32 TotalXp, int32 RevisionXp, bool bIsPurchased);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTimedCampaignStatusChanged(UCampaignImpl* Campaign);
    
    UFUNCTION(BlueprintCallable)
    void OnReady(FOnCampaignsChangedDelegate NewOnReady);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCampaignXpChanged(UObject* Campaign, int32 Xp);
    
    UFUNCTION(BlueprintCallable)
    void OnCampaignPurchasedChanged(UObject* Campaign, bool bIsPurchased);
    
    UFUNCTION(BlueprintCallable)
    void OnCampaignLevelChanged(UObject* Campaign, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void OnCampaignCompleted(UObject* Campaign);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCampaignActive(TScriptInterface<ICampaign> Campaign) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TScriptInterface<ICampaign>> GetOwnedCampaigns();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<ICampaign> GetCampaignWithId(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    TScriptInterface<ICampaign> GetCampaignIdFromItemAssetId(const FPrimaryAssetId& ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<ICampaign> GetCampaignForStoreOffer(const FString& StoreOfferId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<ICampaign> GetCampaignForPremiumGood(const FPrimaryAssetId& PremiumGoodId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TScriptInterface<ICampaign>> GetAllCampaigns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TScriptInterface<ICampaign>> GetActiveCampaigns();
    
    UFUNCTION(BlueprintCallable)
    void FixPurchasedCampaignStateIfNeeded(TScriptInterface<ICampaignPurchasable> PurchasableCampaign);
    
    UFUNCTION(BlueprintCallable)
    void AbandonCampaign(UObject* CampaignObject);
    
    UFUNCTION(BlueprintCallable)
    void AbandonAllCampaigns();
    
    
    // Fix for true pure virtual functions not being implemented
};

