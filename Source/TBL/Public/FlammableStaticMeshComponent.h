#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TBLStaticMeshComponent.h"
#include "FlammableStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFlammableStaticMeshComponent : public UTBLStaticMeshComponent {
    GENERATED_BODY()
public:
    UFlammableStaticMeshComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BurningApplied(FVector HitRelativeLocation);
    
};

