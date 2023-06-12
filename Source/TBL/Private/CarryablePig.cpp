#include "CarryablePig.h"
#include "CarryablePlayerComponent.h"
#include "InteractableComponent.h"

ACarryablePig::ACarryablePig() {
    this->CarryablePlayer = CreateDefaultSubobject<UCarryablePlayerComponent>(TEXT("CarryablePlayer"));
    this->Interactable = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
}

