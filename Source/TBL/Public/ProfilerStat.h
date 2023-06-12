#pragma once
#include "CoreMinimal.h"
#include "ProfilerStat.generated.h"

USTRUCT(BlueprintType)
struct FProfilerStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    TBL_API FProfilerStat();
};

