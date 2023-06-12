#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VirtualGood.h"
#include "VirtualGoodLoadoutItem.generated.h"

UCLASS(Blueprintable)
class TBL_API UVirtualGoodLoadoutItem : public UVirtualGood {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath Loadout;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath Item;
    
    UVirtualGoodLoadoutItem();
};

