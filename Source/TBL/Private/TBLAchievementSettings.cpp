#include "TBLAchievementSettings.h"

UTBLAchievementSettings::UTBLAchievementSettings() {
    this->AchievementWorkers.AddDefaulted(16);
    this->DebugAchievementCountCap = 2147483647;
    this->AchievementLists.AddDefaulted(5);
}

