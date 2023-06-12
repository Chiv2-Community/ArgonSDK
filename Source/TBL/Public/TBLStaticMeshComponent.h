#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TBLStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTBLStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UTBLStaticMeshComponent();
};

