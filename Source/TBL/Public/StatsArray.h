#pragma once
#include "CoreMinimal.h"
#include "StatEntry.h"
#include "StatsArray.generated.h"

USTRUCT(BlueprintType)
struct FStatsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatEntry> Items;
    
    TBL_API FStatsArray();
};

