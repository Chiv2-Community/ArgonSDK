#pragma once
#include "CoreMinimal.h"
#include "MarkedActorEntry.h"
#include "MarkedActorEntryBurnable.generated.h"

class UBurnableComponent;

USTRUCT(BlueprintType)
struct FMarkedActorEntryBurnable : public FMarkedActorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBurnableComponent> BurnableComponent;
    
    TBL_API FMarkedActorEntryBurnable();
};

