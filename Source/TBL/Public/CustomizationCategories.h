#pragma once
#include "CoreMinimal.h"
#include "CustomizationCategories.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationCategories {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> Categories;
    
    TBL_API FCustomizationCategories();
};

