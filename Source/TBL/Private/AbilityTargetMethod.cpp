#include "AbilityTargetMethod.h"

void UAbilityTargetMethod::StartCosmetic() {
}

void UAbilityTargetMethod::StartAutonomous() {
}

void UAbilityTargetMethod::Start() {
}

AAbilityInvocation* UAbilityTargetMethod::GetInvocation() const {
    return NULL;
}

FString UAbilityTargetMethod::GetContextString() const {
    return TEXT("");
}

void UAbilityTargetMethod::Finish() {
}

FVector UAbilityTargetMethod::ClampTargetLocationToGround(AActor* InInitiator, FVector TargetLocation, float MaxRange, bool& bHitGround, bool bTraceComplex, float MaxGroundTraceZAllowance) {
    return FVector{};
}

FResult UAbilityTargetMethod::CanInitiate() const {
    return FResult{};
}

void UAbilityTargetMethod::Cancel() {
}

UAbilityTargetMethod::UAbilityTargetMethod() {
    this->bFinished = false;
    this->bUndoActionsOnCancel = false;
    this->bUnblockable = false;
    this->bDoParryBoxTrace = true;
    this->Flags = 6;
    this->bStarted = false;
    this->MultiTargetMethodIndex = -1;
    this->AbilitySpec = NULL;
}

