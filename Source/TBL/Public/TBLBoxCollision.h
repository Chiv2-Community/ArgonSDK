#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "TBLBoxCollision.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTBLBoxCollision : public UBoxComponent {
    GENERATED_BODY()
public:
    UTBLBoxCollision();
};

