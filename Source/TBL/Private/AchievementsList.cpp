#include "AchievementsList.h"

void UAchievementsList::UpdateProcessedItems() {
}

void UAchievementsList::Initialize(ATBLPlayerState* InPlayerState) {
}

int32 UAchievementsList::GetProcessedItemsCount() {
    return 0;
}

FAchievementProgress UAchievementsList::GetProcessedItemAt(int32 Index) {
    return FAchievementProgress{};
}

UAchievementsList::UAchievementsList() {
    this->PlayerState = NULL;
}

