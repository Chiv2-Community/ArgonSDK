#include "TBLAchievementTask.h"

bool UTBLAchievementTask::IsComplete() {
    return false;
}

float UTBLAchievementTask::GetProgressFloat() const {
    return 0.0f;
}

void UTBLAchievementTask::BroadcastProgressUpdated() {
}

UTBLAchievementTask::UTBLAchievementTask() {
    this->bResetOnDeath = false;
    this->bResetOnNewMatch = false;
}

