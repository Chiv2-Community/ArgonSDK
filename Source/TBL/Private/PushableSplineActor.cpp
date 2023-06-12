#include "PushableSplineActor.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

void APushableSplineActor::OnLevelLoaded() {
}

APushableSplineActor::APushableSplineActor() {
    this->SplineComponentGenerated = CreateDefaultSubobject<USplineComponent>(TEXT("SplineGenerated"));
    this->SplineComponentOutline = CreateDefaultSubobject<USplineComponent>(TEXT("SplineOutline"));
    this->DefaultSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneComponent"));
    this->StartingDistance = 0.00f;
    this->AllSubLevelsLoaded = false;
    this->AllowConstructionScriptToRun = false;
}

