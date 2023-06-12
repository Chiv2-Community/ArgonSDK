#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPointsOnGridTrace.h"
#include "UtilityAI_Context.h"
#include "UtilityAI_TargetGenerator.h"
#include "TG_PointsOnGrid.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTG_PointsOnGrid : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceBetween;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPointsOnGridTrace TraceType;
    
    UTG_PointsOnGrid();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetLocationsAroundTarget(const FUtilityAI_Context& C) const;
    
};

