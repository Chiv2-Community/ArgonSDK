#pragma once
#include "CoreMinimal.h"
#include "SubObjectiveZoneDisplayComponent.h"
#include "ObjectiveZoneDisplayComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UObjectiveZoneDisplayComponent : public USubObjectiveZoneDisplayComponent {
    GENERATED_BODY()
public:
    UObjectiveZoneDisplayComponent();
};

