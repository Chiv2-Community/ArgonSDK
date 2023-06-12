#include "ServerInitiateAbilityParams.h"

FServerInitiateAbilityParams::FServerInitiateAbilityParams() {
    this->AbilitySpec = NULL;
    this->InventoryItem = NULL;
    this->ClientTimeStamp = 0.00f;
    this->AttackIndex = 0;
    this->bPreMovement = false;
}

