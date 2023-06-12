#include "ST_SparseGridData.h"
#include "ST_SparseGrid.h"

UST_SparseGridData::UST_SparseGridData() {
    this->GridClass = UST_SparseGrid::StaticClass();
    this->NumCellsX = 5;
    this->NumCellsY = 5;
    this->CellSize = 1000;
    this->RegisterAllocSize = 128;
    this->CellAllocSize = 16;
    this->RegisterAllocShrinkMultiplier = 0;
    this->CellAllocShrinkMultiplier = 1;
}

