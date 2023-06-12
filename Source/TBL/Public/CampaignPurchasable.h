#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OnCampaignPurchasedChangedDelegate.h"
#include "StoreOfferItem.h"
#include "CampaignPurchasable.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UCampaignPurchasable : public UInterface {
    GENERATED_BODY()
};

class ICampaignPurchasable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnPurchasedChanged(const FOnCampaignPurchasedChanged& Delegate) PURE_VIRTUAL(UnbindOnPurchasedChanged,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetPurchased() PURE_VIRTUAL(SetPurchased,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsPurchased() const PURE_VIRTUAL(IsPurchased, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FStoreOfferItem GetStoreOfferItem() const PURE_VIRTUAL(GetStoreOfferItem, return FStoreOfferItem{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FString GetStoreOfferId() const PURE_VIRTUAL(GetStoreOfferId, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnPurchasedChanged(const FOnCampaignPurchasedChanged& Delegate) PURE_VIRTUAL(BindOnPurchasedChanged,);
    
};

