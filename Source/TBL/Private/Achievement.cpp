#include "Achievement.h"

FText UAchievement::GetTrackedObjectName(APlayerState* InPlayerState, const FAchievementProgress& InAchievement) {
    return FText::GetEmpty();
}

UAchievement::UAchievement() {
    this->bRepeatable = false;
    this->MaxProgress = 1;
    this->RewardPolicy = ERewardPolicy::Notification;
}

