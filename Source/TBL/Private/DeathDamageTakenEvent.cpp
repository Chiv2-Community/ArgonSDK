#include "DeathDamageTakenEvent.h"

FDeathDamageTakenEvent::FDeathDamageTakenEvent() {
    this->RandomSeed = 0;
    this->KillReason = EKillReason::Damage;
    this->DeadCharacterId = 0;
    this->bAttachToProjectile = false;
}

