#pragma once
#include "CoreMinimal.h"
#include "StageDescription.generated.h"

USTRUCT(BlueprintType)
struct FStageDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    TBL_API FStageDescription();
};

