#include "TG_PointsOnGrid.h"

TArray<FVector> UTG_PointsOnGrid::GetLocationsAroundTarget(const FUtilityAI_Context& C) const {
    return TArray<FVector>();
}

UTG_PointsOnGrid::UTG_PointsOnGrid() {
    this->GridSize = 0.00f;
    this->SpaceBetween = 0.00f;
    this->TraceType = EPointsOnGridTrace::DiscardMissedTraces;
}

