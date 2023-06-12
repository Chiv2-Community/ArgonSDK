#pragma once
#include "CoreMinimal.h"
#include "CustomizationTagDefinitionList.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationTagDefinitionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    TBL_API FCustomizationTagDefinitionList();
};

