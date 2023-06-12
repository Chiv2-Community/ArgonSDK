#include "FastSharedProperties_HorseMovement.h"

FFastSharedProperties_HorseMovement::FFastSharedProperties_HorseMovement() {
    this->ReplicatedCurrentForwardSpeed = 0.00f;
    this->ReplicatedCurrentTurnRate = 0.00f;
    this->ReplicatedCurrentTurnRateAccel = 0.00f;
    this->ReplicatedTargetSpeed = 0.00f;
    this->ReplicatedIsAccelerating = 0;
    this->ReplicatedIsDecelerating = 0;
    this->ReplicatedForwardInput = 0.00f;
    this->ReplicatedRightInput = 0.00f;
}

