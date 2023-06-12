#include "BreakableActor.h"
#include "Components/SceneComponent.h"
#include "BreakableComponent.h"
#include "StatsComponent.h"

ABreakableActor::ABreakableActor() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->BreakableComponent = CreateDefaultSubobject<UBreakableComponent>(TEXT("BreakableComponent"));
    this->StatsComponent = CreateDefaultSubobject<UStatsComponent>(TEXT("StatsComponent"));
}

