#pragma once
#include "CoreMinimal.h"
#include "SwatchSelection.h"
#include "SwatchPreset.generated.h"

USTRUCT(BlueprintType)
struct FSwatchPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSwatchSelection> Selections;
    
    TBL_API FSwatchPreset();
};

