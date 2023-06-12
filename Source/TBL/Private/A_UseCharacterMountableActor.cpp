#include "A_UseCharacterMountableActor.h"

void UA_UseCharacterMountableActor::StopCharging() {
}

void UA_UseCharacterMountableActor::StartCharging() {
}

void UA_UseCharacterMountableActor::OnDismount(ATBLCharacter* Driver, EDismountType DismountType) {
}

void UA_UseCharacterMountableActor::OnChargeUpdated(ACharacterMountableActor* InCharacterMountableActor, float Charge) {
}

UA_UseCharacterMountableActor::UA_UseCharacterMountableActor() {
    this->Controller = NULL;
    this->CharacterMountableActor = NULL;
    this->SiegeMountPoint = NULL;
    this->DesiredChargePercent = 0.00f;
    this->bCharging = false;
}

