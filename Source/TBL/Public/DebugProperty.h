#pragma once
#include "CoreMinimal.h"
#include "PropertyMenuNextItem.h"
#include "DebugProperty.generated.h"

USTRUCT(BlueprintType)
struct FDebugProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyMenuNextItem> PropertyStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllObjects;
    
    TBL_API FDebugProperty();
};

