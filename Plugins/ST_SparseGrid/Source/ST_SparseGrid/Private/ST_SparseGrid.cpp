#include "ST_SparseGrid.h"

int32 UST_SparseGrid::K2_WorldToCell(FVector2D InWorldXY) const {
    return 0;
}

void UST_SparseGrid::K2_GetTileComponents(const FST_SparseGridCellTile& Tile, TArray<UST_SGComponent*>& Components) {
}

FST_Int2D UST_SparseGrid::K2_GetGridMax() const {
    return FST_Int2D{};
}

void UST_SparseGrid::K2_GetCellComponents(const int32 CellID, TArray<UST_SGComponent*>& Components) {
}

float UST_SparseGrid::K2_GetCellBoundsRadius() const {
    return 0.0f;
}

FST_SparseGridCellTile UST_SparseGrid::GetSearchTile(const FVector2D& WorldSearchOrigin, const FVector2D& WorldSearchExtents, const bool bClampGridEdge) const {
    return FST_SparseGridCellTile{};
}

TArray<UST_SGComponent*> UST_SparseGrid::GetGridComponents() const {
    return TArray<UST_SGComponent*>();
}

UST_SparseGrid* UST_SparseGrid::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UST_SparseGrid::ForceRebuild() {
}

UST_SparseGrid::UST_SparseGrid() {
    this->NumCellsX = 5;
    this->NumCellsY = 5;
    this->CellSize = 1000;
    this->RegisterAllocSize = 128;
    this->RegisterAllocShrinkMultiplier = 1;
    this->CellAllocSize = 16;
    this->CellAllocShrinkMultiplier = 1;
}

