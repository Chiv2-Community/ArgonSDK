#include "AchievementProgress.h"

FAchievementProgress::FAchievementProgress() {
    this->Achievement = NULL;
    this->TrackedObject = NULL;
    this->bActive = false;
    this->Progress = 0;
    this->InheritedProgress = 0;
    this->CompleteCount = 0;
}

