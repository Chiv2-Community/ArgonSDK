#include "TBLPathFollowingComponent.h"

void UTBLPathFollowingComponent::OnPathBlocked() {
}

void UTBLPathFollowingComponent::OnFinishedBlockedMovementResponse() {
}

void UTBLPathFollowingComponent::OnBlockingActorExpired() {
}

UTBLPathFollowingComponent::UTBLPathFollowingComponent() {
    this->bNavLinkWantsToJump = false;
    this->bCannotCompletePath = false;
    this->BlockStartTime = -1.00f;
    this->PathBlockFailDuration = 0.00f;
    this->bPawnFellWhilePerformingBlockedMove = false;
    this->bDeferredPathUpdate = false;
    this->bPathInvalidatedDuringDefer = false;
}

