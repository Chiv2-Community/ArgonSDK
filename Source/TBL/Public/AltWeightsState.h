#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlendedLODSkelMeshSkinWeights -FallbackName=BlendedLODSkelMeshSkinWeights
#include "AltWeightsState.generated.h"

USTRUCT(BlueprintType)
struct FAltWeightsState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlendedLODSkelMeshSkinWeights> LODWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> WeightSetCache;
    
    TBL_API FAltWeightsState();
};

