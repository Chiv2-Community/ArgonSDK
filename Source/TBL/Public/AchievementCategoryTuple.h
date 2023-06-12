#pragma once
#include "CoreMinimal.h"
#include "AchievementCategoryTuple.generated.h"

USTRUCT(BlueprintType)
struct FAchievementCategoryTuple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubcategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayPriority;
    
    TBL_API FAchievementCategoryTuple();
};

