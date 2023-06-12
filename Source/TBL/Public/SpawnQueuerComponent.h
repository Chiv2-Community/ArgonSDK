#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpawnQueuerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpawnQueuerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USpawnQueuerComponent();
};

