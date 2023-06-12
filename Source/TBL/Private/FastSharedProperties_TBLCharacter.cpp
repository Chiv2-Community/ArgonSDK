#include "FastSharedProperties_TBLCharacter.h"

FFastSharedProperties_TBLCharacter::FFastSharedProperties_TBLCharacter() {
    this->ServerFrame = 0;
    this->ReplicatedMovementMode = 0;
    this->bUseRemoteViewYaw = false;
    this->RemoteViewYaw = 0;
    this->bHasRelativeBase = 0;
    this->bRelativeBasedChanged = 0;
    this->bIsOnCatapult = 0;
}

