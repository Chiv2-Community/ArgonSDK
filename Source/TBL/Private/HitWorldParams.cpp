#include "HitWorldParams.h"

FHitWorldParams::FHitWorldParams() {
    this->HitActor = NULL;
    this->PhysMaterial = NULL;
    this->AttackID = 0;
    this->bBreakableHit = false;
    this->bSkipAutonomous = false;
}

