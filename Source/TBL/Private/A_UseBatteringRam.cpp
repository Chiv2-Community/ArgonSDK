#include "A_UseBatteringRam.h"

void UA_UseBatteringRam::StopCharging() {
}

void UA_UseBatteringRam::StartCharging() {
}

void UA_UseBatteringRam::OnDismount(ATBLCharacter* Driver, EDismountType DismountType) {
}

void UA_UseBatteringRam::OnChargeUpdated(ABatteringRam* InBatteringRam, float Charge) {
}

UA_UseBatteringRam::UA_UseBatteringRam() {
    this->Controller = NULL;
    this->BatteringRam = NULL;
    this->SiegeMountPoint = NULL;
    this->DesiredChargePercent = 0.00f;
    this->bCharging = false;
}

