#pragma once
#include "CoreMinimal.h"
#include "InteractableComponent.h"
#include "DestroyableComponent.generated.h"

class UStatsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TBL_API UDestroyableComponent : public UInteractableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStatsComponent> StatsComponent;
    
    UDestroyableComponent();
};

