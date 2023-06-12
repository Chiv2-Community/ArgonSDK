#include "SpawnBoost.h"

FSpawnBoost::FSpawnBoost() {
    this->Bonus = 0.00f;
    this->CurrentBonus = 0.00f;
    this->SpawnTime = 0.00f;
    this->SprintTime = 0.00f;
    this->Deceleration = 0.00f;
    this->TimerInterval = 0.00f;
    this->EnemyDistance = 0.00f;
    this->EnemyTime = 0.00f;
    this->FarFromEnemyTime = 0.00f;
    this->bEnabled = false;
}

