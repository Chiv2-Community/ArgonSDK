#include "SimulatedProjectile.h"

FSimulatedProjectile::FSimulatedProjectile() {
    this->bWaitingForReplication = false;
    this->PreviousOwner = NULL;
    this->AttackID = 0;
}

