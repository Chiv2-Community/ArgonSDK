#pragma once
#include "CoreMinimal.h"
#include "FloatArray.h"
#include "TeamImbalanceTracker.generated.h"

class ATBLPlayerState;

USTRUCT(BlueprintType)
struct FTeamImbalanceTracker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<ATBLPlayerState>, FFloatArray> AgathaKills;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<ATBLPlayerState>, FFloatArray> MasonKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KillTimeRelevancySeconds;
    
public:
    TBL_API FTeamImbalanceTracker();
};

