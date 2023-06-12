#pragma once
#include "CoreMinimal.h"
#include "MaterialOverride.h"
#include "MaterialOverrideState.generated.h"

USTRUCT(BlueprintType)
struct FMaterialOverrideState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialOverride> MaterialOverrides;
    
    TBL_API FMaterialOverrideState();
};

