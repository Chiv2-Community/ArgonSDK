#pragma once
#include "CoreMinimal.h"
#include "MeshCustomizationContext.h"
#include "RandomCustomizationMeshes.generated.h"

USTRUCT(BlueprintType)
struct FRandomCustomizationMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshCustomizationContext> Options;
    
    TBL_API FRandomCustomizationMeshes();
};

