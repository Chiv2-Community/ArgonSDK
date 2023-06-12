#pragma once
#include "CoreMinimal.h"
#include "CustomizationCategories.h"
#include "CustomizationCategoryTags.h"
#include "CustomizationTags.h"
#include "CustomizationAttributes.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationTags Exclusivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationCategories Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationCategoryTags CategoryConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Alignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationCategories SortingAttributes;
    
    TBL_API FCustomizationAttributes();
};

