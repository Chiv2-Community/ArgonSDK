#include "CameraModifier_FollowAnimation.h"


void UCameraModifier_FollowAnimation::Cancel() {
}

UCameraModifier_FollowAnimation::UCameraModifier_FollowAnimation() {
    this->bFollowPitch = true;
    this->bFollowYaw = false;
    this->TargetCharacter = NULL;
    this->PrevSocketPitch = 0.00f;
    this->PrevSocketYaw = 0.00f;
    this->AnimationPitch = 0.00f;
    this->AnimationYaw = 0.00f;
}

