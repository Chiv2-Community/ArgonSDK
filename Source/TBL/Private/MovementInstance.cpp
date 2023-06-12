#include "MovementInstance.h"

void UMovementInstance::Stop() {
}

void UMovementInstance::StartMovement(UMovementSequence* MovementSeq) {
}

void UMovementInstance::OnWallHit(AActor* Owner, AActor* HitActor, float HitAngle) {
}

void UMovementInstance::OnCharacterHit(AActor* Owner, ATBLCharacter* HitCharacter) {
}

void UMovementInstance::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

ATBLCharacterBase* UMovementInstance::GetCharacterOwner() const {
    return NULL;
}

UMovementInstance::UMovementInstance() {
    this->Sequence = NULL;
    this->TargetActor = NULL;
    this->InitTime = 0.00f;
    this->ScalingFactor = 0.00f;
    this->CurrentMovement = NULL;
    this->bIsFinished = false;
    this->FinishTime = 0.00f;
}

