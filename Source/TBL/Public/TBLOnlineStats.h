#pragma once
#include "CoreMinimal.h"
#include "LevelUpResult.h"
#include "TBLOnlineStats.generated.h"

class ATBLPlayerState;

USTRUCT(BlueprintType)
struct FTBLOnlineStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLevelUpResult> LevelUpResults;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StatValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> OriginalValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLPlayerState* PlayerState;
    
public:
    TBL_API FTBLOnlineStats();
};

