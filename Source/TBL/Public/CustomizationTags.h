#pragma once
#include "CoreMinimal.h"
#include "CustomizationTags.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    TBL_API FCustomizationTags();
};

