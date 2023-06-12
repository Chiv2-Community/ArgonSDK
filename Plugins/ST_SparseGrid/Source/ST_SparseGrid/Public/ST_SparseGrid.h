#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ST_Int2D.h"
#include "ST_SparseGridCellTile.h"
#include "ST_SparseGrid.generated.h"

class UObject;
class UST_SGComponent;
class UST_SparseGrid;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ST_SPARSEGRID_API UST_SparseGrid : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FST_Int2D GridOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumCellsX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumCellsY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RegisterAllocSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RegisterAllocShrinkMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CellAllocSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CellAllocShrinkMultiplier;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UST_SGComponent*> GridComponents;
    
public:
    UST_SparseGrid();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 K2_WorldToCell(FVector2D InWorldXY) const;
    
    UFUNCTION(BlueprintCallable)
    void K2_GetTileComponents(const FST_SparseGridCellTile& Tile, TArray<UST_SGComponent*>& Components);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FST_Int2D K2_GetGridMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void K2_GetCellComponents(const int32 CellID, TArray<UST_SGComponent*>& Components);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float K2_GetCellBoundsRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FST_SparseGridCellTile GetSearchTile(const FVector2D& WorldSearchOrigin, const FVector2D& WorldSearchExtents, const bool bClampGridEdge) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UST_SGComponent*> GetGridComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UST_SparseGrid* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ForceRebuild();
    
};

