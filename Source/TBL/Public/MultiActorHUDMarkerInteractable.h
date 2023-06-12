#pragma once
#include "CoreMinimal.h"
#include "MarkedActorEntryInteractable.h"
#include "MultiActorHUDMarkerBase.h"
#include "MultiActorHUDMarkerInteractable.generated.h"

UCLASS(Blueprintable)
class TBL_API AMultiActorHUDMarkerInteractable : public AMultiActorHUDMarkerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMarkedActorEntryInteractable> MarkedActors;
    
public:
    AMultiActorHUDMarkerInteractable();
};

