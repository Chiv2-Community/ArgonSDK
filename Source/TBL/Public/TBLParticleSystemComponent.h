#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "TBLParticleSystemComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTBLParticleSystemComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
    UTBLParticleSystemComponent();
};

