#pragma once
#include "CoreMinimal.h"
#include "MarkedActorEntry.h"
#include "MarkedActorEntryInteractable.generated.h"

class UInteractableComponent;

USTRUCT(BlueprintType)
struct FMarkedActorEntryInteractable : public FMarkedActorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInteractableComponent> InteractableComponent;
    
    TBL_API FMarkedActorEntryInteractable();
};

