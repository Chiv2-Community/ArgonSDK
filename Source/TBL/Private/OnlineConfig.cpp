#include "OnlineConfig.h"

FTitleProgressionRow UOnlineConfig::GetTitleProgression(int32 Level) {
    return FTitleProgressionRow{};
}


UOnlineConfig::UOnlineConfig() {
    this->WeaponAchievements.AddDefaulted(41);
    this->TitleProgressionTable = NULL;
}

