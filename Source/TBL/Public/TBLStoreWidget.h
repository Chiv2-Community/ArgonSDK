#pragma once
#include "CoreMinimal.h"
#include "EStoreListing.h"
#include "StoreOfferItem.h"
#include "TBLScreenWidget.h"
#include "TBLStoreWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTBLStoreWidget : public UTBLScreenWidget {
    GENERATED_BODY()
public:
    UTBLStoreWidget();
    UFUNCTION(BlueprintCallable)
    void OnStoreScreenOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildStoreOffersListing(EStoreListing Listing, const TArray<FStoreOfferItem>& OfferIds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildStoreOffers(const TArray<FStoreOfferItem>& OfferIds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildAddOnOffers(const TArray<FStoreOfferItem>& OfferIds);
    
};

