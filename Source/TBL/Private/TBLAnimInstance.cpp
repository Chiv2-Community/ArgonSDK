#include "TBLAnimInstance.h"

void UTBLAnimInstance::SetLODLevel(int32 NewLodLevel) {
}

void UTBLAnimInstance::SetIsFarFromCamera(bool bIsFar) {
}

void UTBLAnimInstance::Montage_StopAll(float InBlendOutTime) {
}

float UTBLAnimInstance::Montage_PlaySection(UAnimMontage* MontageToPlay, FName StartingSection, float InPlayRate, float StartSectionPercent, float InBlendTime, EMontagePlayReturnType ReturnValueType) {
    return 0.0f;
}

bool UTBLAnimInstance::Montage_IsAnyMontagePlayingOnSlot(const FName SlotNodeName) const {
    return false;
}

TArray<FString> UTBLAnimInstance::GetDebugNodeVisit_Blend() {
    return TArray<FString>();
}

TArray<FString> UTBLAnimInstance::GetDebugNodeVisit() {
    return TArray<FString>();
}

TArray<FAnimDebugMontageInstance> UTBLAnimInstance::GetDebugMontageInstances() {
    return TArray<FAnimDebugMontageInstance>();
}

void UTBLAnimInstance::GatherDebugNodeVisit() {
}



void UTBLAnimInstance::DumpAnimationInfoToFile() {
}

void UTBLAnimInstance::AnimNotify_EndWeaponTracers() {
}

void UTBLAnimInstance::AnimNotify_ActivateAbility() {
}

UTBLAnimInstance::UTBLAnimInstance() {
    this->bWantsUpdateAnimation = true;
    this->LastUpdateAnimationTime = 0.00f;
    this->LastUpdateAnimationInterval = 0.00f;
    this->SkeletalMesh = NULL;
    this->CombatStateComponent = NULL;
    this->LODLevel = 0;
    this->FarFromCameraDistance = 1100.00f;
    this->IsFarFromCamera = false;
    this->HideLowLodBones.AddDefaulted(1);
    this->bGatherDebugNodeVisit = false;
    this->bDumpAnimationInfoToFile = false;
}

