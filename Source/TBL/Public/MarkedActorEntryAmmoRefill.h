#pragma once
#include "CoreMinimal.h"
#include "MarkedActorEntry.h"
#include "Templates/SubclassOf.h"
#include "MarkedActorEntryAmmoRefill.generated.h"

class AInventoryItem;
class UWeaponRackComponent;

USTRUCT(BlueprintType)
struct FMarkedActorEntryAmmoRefill : public FMarkedActorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWeaponRackComponent> WeaponRackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<AInventoryItem>> RefillItems;
    
    TBL_API FMarkedActorEntryAmmoRefill();
};

