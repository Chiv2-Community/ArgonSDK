#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EOnlineStat.h"
#include "LevelUpResult.generated.h"

USTRUCT(BlueprintType)
struct FLevelUpResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPrimaryAssetId, int32> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnlineStat Stat;
    
    TBL_API FLevelUpResult();
};

