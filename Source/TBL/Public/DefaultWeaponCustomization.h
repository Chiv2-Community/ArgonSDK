#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DefaultWeaponCustomization.generated.h"

class AInventoryItem;
class UCTBase;

UCLASS(Blueprintable)
class UDefaultWeaponCustomization : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AInventoryItem>, UCTBase*> DefaultCustomizationWeaponMap;
    
    UDefaultWeaponCustomization();
};

