#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SavedSpatializationZone.h"
#include "TBLReplicationGraphSpatialNodeSettings.generated.h"

USTRUCT(BlueprintType)
struct FTBLReplicationGraphSpatialNodeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FVector2D SpatialBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bEnableDynamicSpatialFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FSavedSpatializationZone> DynamicSpatialFrequencyZones;
    
    TBL_API FTBLReplicationGraphSpatialNodeSettings();
};

