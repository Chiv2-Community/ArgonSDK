#pragma once
#include "CoreMinimal.h"
#include "StatGroupData.generated.h"

USTRUCT(BlueprintType)
struct FStatGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Command;
    
    TBL_API FStatGroupData();
};

