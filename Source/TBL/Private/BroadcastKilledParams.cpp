#include "BroadcastKilledParams.h"

FBroadcastKilledParams::FBroadcastKilledParams() {
    this->RandomSeed = 0;
    this->KillReason = EKillReason::Damage;
    this->DeadCharacterId = 0;
    this->bAttachToProjectile = false;
}

