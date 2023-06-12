#include "DestinationGeneratorVolume.h"

void ADestinationGeneratorVolume::ProjectDestinationListToNavMesh() {
}

FVector ADestinationGeneratorVolume::GetRandomDestination() const {
    return FVector{};
}

TArray<FVector> ADestinationGeneratorVolume::GetDestinationsInGridDistance(const FVector& QueryLocation, int32 GridDistance) const {
    return TArray<FVector>();
}

TArray<FVector> ADestinationGeneratorVolume::GetDestinationList() const {
    return TArray<FVector>();
}

FVector ADestinationGeneratorVolume::GetDestinationByIndex(int32 Index) const {
    return FVector{};
}

void ADestinationGeneratorVolume::GeneratePoints() {
}

void ADestinationGeneratorVolume::Deactivate() {
}

void ADestinationGeneratorVolume::Activate() {
}

ADestinationGeneratorVolume::ADestinationGeneratorVolume() {
    this->bIsActive = true;
    this->DestinationDensity = 500.00f;
    this->DestinationVariance = 0.00f;
    this->GenerationMode = EGenerationMode::Uniform;
    this->NavMeshProjectionDepenetrationDistance = 0.00f;
}

