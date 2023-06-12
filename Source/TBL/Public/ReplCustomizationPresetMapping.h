#pragma once
#include "CoreMinimal.h"
#include "CustomizationPreset.h"
#include "ReplCustomizationPresetMapping.generated.h"

USTRUCT(BlueprintType)
struct FReplCustomizationPresetMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationPreset> AgathaPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationPreset> MasonPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationPreset> TenosiaPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationPreset> FFAPresets;
    
    TBL_API FReplCustomizationPresetMapping();
};

