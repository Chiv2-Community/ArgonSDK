#include "HUDMarkerActor.h"
#include "ActorInfoDisplayComponent.h"
#include "HudMarkerDisplayComponent.h"
#include "ObjectiveStatusDisplayComponent.h"

UObjectiveStatusDisplayComponent* AHUDMarkerActor::GetObjectiveStatusComponent() const {
    return NULL;
}

UHudMarkerDisplayComponent* AHUDMarkerActor::GetHUDMarkerComponent() const {
    return NULL;
}

UActorInfoDisplayComponent* AHUDMarkerActor::GetActorInfoComponent() const {
    return NULL;
}

AHUDMarkerActor::AHUDMarkerActor() {
    this->HUDMarkerComponent = CreateDefaultSubobject<UHudMarkerDisplayComponent>(TEXT("HUDMarkerComponent"));
    this->ObjectiveStatusComponent = CreateDefaultSubobject<UObjectiveStatusDisplayComponent>(TEXT("ObjectiveStatusComponent"));
    this->ActorInfoComponent = CreateDefaultSubobject<UActorInfoDisplayComponent>(TEXT("ActorInfoComponent"));
}

