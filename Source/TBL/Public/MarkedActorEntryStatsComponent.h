#pragma once
#include "CoreMinimal.h"
#include "MarkedActorEntry.h"
#include "MarkedActorEntryStatsComponent.generated.h"

class UStatsComponent;

USTRUCT(BlueprintType)
struct FMarkedActorEntryStatsComponent : public FMarkedActorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStatsComponent> StatsComponent;
    
    TBL_API FMarkedActorEntryStatsComponent();
};

