#pragma once
#include "CoreMinimal.h"
#include "CustomizationSortingTagDefinitionList.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationSortingTagDefinitionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
    TBL_API FCustomizationSortingTagDefinitionList();
};

