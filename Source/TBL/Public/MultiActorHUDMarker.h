#pragma once
#include "CoreMinimal.h"
#include "MarkedActorEntry.h"
#include "MultiActorHUDMarkerBase.h"
#include "MultiActorHUDMarker.generated.h"

UCLASS(Blueprintable)
class TBL_API AMultiActorHUDMarker : public AMultiActorHUDMarkerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMarkedActorEntry> MarkedActors;
    
public:
    AMultiActorHUDMarker();
};

