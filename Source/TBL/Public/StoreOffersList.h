#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "StoreOffersList.generated.h"

class UTBLScrollBarStyleDataAsset;

UCLASS(Blueprintable)
class UStoreOffersList : public UListView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLScrollBarStyleDataAsset* ScrollBarStyle;
    
    UStoreOffersList();
};

