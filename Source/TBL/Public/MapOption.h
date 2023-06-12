#pragma once
#include "CoreMinimal.h"
#include "MapModifierPropertiesArray.h"
#include "MapOption.generated.h"

USTRUCT(BlueprintType)
struct FMapOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> IgnoredOptionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapModifierPropertiesArray> MapEntry;
    
    TBL_API FMapOption();
};

