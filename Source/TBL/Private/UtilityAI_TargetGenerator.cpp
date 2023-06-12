#include "UtilityAI_TargetGenerator.h"

bool UUtilityAI_TargetGenerator::IsValidTarget(const FUtilityAI_Context& Context) const {
    return false;
}

TArray<UObject*> UUtilityAI_TargetGenerator::GetTargetObjects_Implementation(const FUtilityAI_Context& C) const {
    return TArray<UObject*>();
}

TArray<FVector> UUtilityAI_TargetGenerator::GetTargetLocations_Implementation(const FUtilityAI_Context& C) const {
    return TArray<FVector>();
}

void UUtilityAI_TargetGenerator::GetTargetHybridLocations_Implementation(const FUtilityAI_Context& C, TArray<FUtilityAITargetHybrid>& Locations) const {
}

TArray<AActor*> UUtilityAI_TargetGenerator::GetTargetActors_Implementation(const FUtilityAI_Context& C) const {
    return TArray<AActor*>();
}

UUtilityAI_TargetGenerator::UUtilityAI_TargetGenerator() {
    this->Type = EUtilityAI_TargetType::None;
}

