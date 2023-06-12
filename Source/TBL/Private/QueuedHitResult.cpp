#include "QueuedHitResult.h"

FQueuedHitResult::FQueuedHitResult() {
    this->bHasHitResult = false;
    this->bHitResultParried = false;
    this->bIsInTeamThwackRange = false;
    this->HitResultTime = 0.00f;
    this->LastAttacker = NULL;
    this->AnimationTimerOvertime = 0.00f;
    this->AttackID = 0;
}

