#include "ParticleLOD.h"
#include "Particles/ParticleSystemComponent.h"

UParticleSystem* AParticleLOD::GetCascadeTemplate() {
    return NULL;
}

AParticleLOD::AParticleLOD() {
    this->CascadeEffectComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Emitter"));
    this->SpawnScale = 1.00f;
    this->Cull = 1.00f;
    this->AlphaScale = 1.00f;
}

