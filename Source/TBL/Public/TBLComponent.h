#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TBLComponent.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTBLComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTBLComponent();
};

