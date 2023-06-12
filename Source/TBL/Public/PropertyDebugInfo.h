#pragma once
#include "CoreMinimal.h"
#include "PropertyDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FPropertyDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyValue;
    
    TBL_API FPropertyDebugInfo();
};

