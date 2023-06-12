#pragma once
#include "CoreMinimal.h"
#include "SwatchSelection.generated.h"

USTRUCT(BlueprintType)
struct FSwatchSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwatchCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
    TBL_API FSwatchSelection();
};

