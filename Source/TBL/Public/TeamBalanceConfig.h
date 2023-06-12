#pragma once
#include "CoreMinimal.h"
#include "TeamBalanceConfig.generated.h"

USTRUCT(BlueprintType)
struct FTeamBalanceConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedNumPlayersDifference;
    
    TBL_API FTeamBalanceConfig();
};

