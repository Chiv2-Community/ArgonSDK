#pragma once
#include "CoreMinimal.h"
#include "CustomizationAttributes.h"
#include "CustomizationContext.h"
#include "ECustomizationTag.h"
#include "VirtualGoodItem.h"
#include "CTBase.generated.h"

class APawn;

UCLASS(Blueprintable)
class TBL_API UCTBase : public UVirtualGoodItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadPriority;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECustomizationTag> Tags;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationAttributes CustomizationAttributes;
    
    UCTBase();
    UFUNCTION(BlueprintCallable)
    bool Apply(UPARAM(Ref) FCustomizationContext& InContext, APawn* InPawn);
    
};

