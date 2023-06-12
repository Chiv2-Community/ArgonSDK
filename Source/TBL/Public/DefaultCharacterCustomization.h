#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "DefaultCharacterCustomization.generated.h"

class UCTBase;

UCLASS(Blueprintable)
class UDefaultCharacterCustomization : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCTBase>> DefaultCharacterCustomizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> DefaultAssetIds;
    
    UDefaultCharacterCustomization();
};

