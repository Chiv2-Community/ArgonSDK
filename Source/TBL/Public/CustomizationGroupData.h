#pragma once
#include "CoreMinimal.h"
#include "CustomizationGroupData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    TBL_API FCustomizationGroupData();
};

