#pragma once
#include "CoreMinimal.h"
#include "MarkedActorEntryStatsComponent.h"
#include "MultiActorHUDMarkerBase.h"
#include "MultiActorHUDMarkerStatsComponent.generated.h"

UCLASS(Blueprintable)
class TBL_API AMultiActorHUDMarkerStatsComponent : public AMultiActorHUDMarkerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMarkedActorEntryStatsComponent> MarkedActors;
    
public:
    AMultiActorHUDMarkerStatsComponent();
};

