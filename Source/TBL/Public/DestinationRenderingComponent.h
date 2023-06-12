#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "DestinationRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TBL_API UDestinationRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDestinationRenderingComponent();
};

