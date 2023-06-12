#pragma once
#include "CoreMinimal.h"
#include "AutoBalancePlayerSwappingPriorityConfig.generated.h"

USTRUCT(BlueprintType)
struct FAutoBalancePlayerSwappingPriorityConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumPlayersPerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowPlayersAlreadyAutoBalanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowPlayersInParties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayersToSwap;
    
    TBL_API FAutoBalancePlayerSwappingPriorityConfig();
};

