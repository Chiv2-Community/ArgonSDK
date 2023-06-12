#pragma once
#include "CoreMinimal.h"
#include "ST_SGComponent.h"
#include "SGComponent_TargetLocation.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USGComponent_TargetLocation : public UST_SGComponent {
    GENERATED_BODY()
public:
    USGComponent_TargetLocation();
};

