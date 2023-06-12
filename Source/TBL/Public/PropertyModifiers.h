#pragma once
#include "CoreMinimal.h"
#include "PropertyModifiers.generated.h"

USTRUCT(BlueprintType)
struct FPropertyModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> Map;
    
    TBL_API FPropertyModifiers();
};

