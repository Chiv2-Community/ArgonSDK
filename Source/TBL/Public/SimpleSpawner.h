#pragma once
#include "CoreMinimal.h"
#include "Spawner.h"
#include "SimpleSpawner.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ASimpleSpawner : public ASpawner {
    GENERATED_BODY()
public:
    ASimpleSpawner();
};

