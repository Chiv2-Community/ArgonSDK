#pragma once
#include "CoreMinimal.h"
#include "EAbilityDescriptorCategory.h"
#include "AbilityCategoryDescription.generated.h"

USTRUCT(BlueprintType)
struct FAbilityCategoryDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EAbilityDescriptorCategory::Type>> Categories;
    
    TBL_API FAbilityCategoryDescription();
};

