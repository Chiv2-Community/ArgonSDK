#include "FollowMasterSkeletalMeshComponent.h"

void UFollowMasterSkeletalMeshComponent::SetPoseOffset(int32 Offset) {
}

UFollowMasterSkeletalMeshComponent::UFollowMasterSkeletalMeshComponent() {
    this->NumFrames = 5;
    this->bFollowServerAnimation = false;
    this->PoseOffset = 0;
    this->FollowCharacter = NULL;
}

