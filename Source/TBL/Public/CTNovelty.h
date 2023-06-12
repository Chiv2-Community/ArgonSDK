#pragma once
#include "CoreMinimal.h"
#include "CTBase.h"
#include "Templates/SubclassOf.h"
#include "CTNovelty.generated.h"

class AInventoryItem;

UCLASS(Blueprintable)
class TBL_API UCTNovelty : public UCTBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> Asset;
    
    UCTNovelty();
    UFUNCTION(BlueprintCallable)
    UClass* ResolveAssetClass();
    
};

