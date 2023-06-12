#pragma once
#include "CoreMinimal.h"
#include "MarkedActorEntryBurnable.h"
#include "MultiActorHUDMarkerBase.h"
#include "MultiActorHUDMarkerBurnable.generated.h"

UCLASS(Blueprintable)
class TBL_API AMultiActorHUDMarkerBurnable : public AMultiActorHUDMarkerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMarkedActorEntryBurnable> MarkedActors;
    
public:
    AMultiActorHUDMarkerBurnable();
};

