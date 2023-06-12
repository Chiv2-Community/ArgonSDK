#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomizationAssetContainer.generated.h"

class UCTBase;

UCLASS(Blueprintable)
class UCustomizationAssetContainer : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCTBase*> Assets;
    
    UCustomizationAssetContainer();
};

