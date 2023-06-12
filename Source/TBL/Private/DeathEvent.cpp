#include "DeathEvent.h"

FDeathEvent::FDeathEvent() {
    this->Killed = NULL;
    this->DamagingAbilitySpec = NULL;
    this->DamageSource = NULL;
    this->KillingBlowItem = NULL;
    this->bIsKillerOnKillingSpree = false;
    this->bIsKilledKillingSpreeEnded = false;
    this->bIsHeadShotKill = false;
    this->bSuicideAndSwictchedTeamsInLoadout = false;
    this->bIsProjectile = false;
    this->bTappedOut = false;
    this->bSwitchToSpectate = false;
    this->bFellOutOfWorld = false;
}

