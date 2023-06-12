#pragma once
#include "CoreMinimal.h"
#include "CustomizationTags.h"
#include "CustomizationCategoryTags.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationCategoryTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizationTags> Categories;
    
    TBL_API FCustomizationCategoryTags();
};

