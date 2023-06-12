#include "UtilityAI_BlueprintLibrary.h"

EUtilityAI_TargetType UUtilityAI_BlueprintLibrary::GetTargetType(const FUtilityAI_Context& C) {
    return EUtilityAI_TargetType::None;
}

UObject* UUtilityAI_BlueprintLibrary::GetTargetObject(const FUtilityAI_Context& C) {
    return NULL;
}

FVector UUtilityAI_BlueprintLibrary::GetTargetLocation(const FUtilityAI_Context& C) {
    return FVector{};
}

AActor* UUtilityAI_BlueprintLibrary::GetTargetActor(const FUtilityAI_Context& C) {
    return NULL;
}

ATBLCharacter* UUtilityAI_BlueprintLibrary::GetOwnerCharacter(const FUtilityAI_Context& C) {
    return NULL;
}

FVector UUtilityAI_BlueprintLibrary::GetMoveTargetLocation(const FUtilityAI_Context& C) {
    return FVector{};
}

UUtilityAI_BlueprintLibrary::UUtilityAI_BlueprintLibrary() {
}

