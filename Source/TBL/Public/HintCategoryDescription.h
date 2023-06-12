#pragma once
#include "CoreMinimal.h"
#include "EHintType.h"
#include "HintCategoryDescription.generated.h"

USTRUCT(BlueprintType)
struct FHintCategoryDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EHintType::Type>> Categories;
    
    TBL_API FHintCategoryDescription();
};

