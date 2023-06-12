#pragma once
#include "CoreMinimal.h"
#include "ST_Int2D.h"
#include "ST_SparseGridCellTile.generated.h"

USTRUCT(BlueprintType)
struct ST_SPARSEGRID_API FST_SparseGridCellTile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FST_Int2D Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FST_Int2D End;
    
    FST_SparseGridCellTile();
};

