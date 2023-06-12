#include "FxComponent.h"

void UFxComponent::PushMaterialOverride(UMaterialInterface* Material) {
}

void UFxComponent::PopMaterialOverride() {
}

UFxInstance* UFxComponent::GetFXInstanceFromActor(AActor* Actor, UClass* Blueprint, bool bCreateIfNeeded) {
    return NULL;
}

UFxComponent* UFxComponent::GetFXComponent(AActor* Actor) {
    return NULL;
}

UFxComponent::UFxComponent() {
}

