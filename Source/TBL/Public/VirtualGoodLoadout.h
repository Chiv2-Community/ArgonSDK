#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VirtualGood.h"
#include "VirtualGoodLoadout.generated.h"

UCLASS(Blueprintable)
class TBL_API UVirtualGoodLoadout : public UVirtualGood {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath Loadout;
    
    UVirtualGoodLoadout();
};

