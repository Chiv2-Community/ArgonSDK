#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ST_SGComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ST_SPARSEGRID_API UST_SGComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UST_SGComponent();
};

