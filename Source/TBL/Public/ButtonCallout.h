#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ButtonCallout.generated.h"

USTRUCT(BlueprintType)
struct FButtonCallout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Instructions;
    
    TBL_API FButtonCallout();
};

