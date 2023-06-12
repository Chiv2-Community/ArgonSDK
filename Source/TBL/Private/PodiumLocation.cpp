#include "PodiumLocation.h"
#include "Components/SceneComponent.h"

APodiumLocation::APodiumLocation() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

