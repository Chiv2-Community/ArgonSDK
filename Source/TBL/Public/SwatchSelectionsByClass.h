#pragma once
#include "CoreMinimal.h"
#include "SwatchSelection.h"
#include "SwatchSelectionsByClass.generated.h"

USTRUCT(BlueprintType)
struct FSwatchSelectionsByClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomizationClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwatchSelection> SwatchSelections;
    
    TBL_API FSwatchSelectionsByClass();
};

