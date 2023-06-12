#include "GoreEvent.h"

FGoreEvent::FGoreEvent() {
    this->HeadGoreAction = EHeadGoreAction::DoNothing;
    this->LimbGoreAction = ELimbGoreAction::DoNothing;
    this->bSpawnedItem = false;
    this->bKillingBlow = false;
}

