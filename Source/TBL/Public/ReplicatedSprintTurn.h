#pragma once
#include "CoreMinimal.h"
#include "ReplicatedSprintTurn.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedSprintTurn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TurnWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TurnDirection;
    
    TBL_API FReplicatedSprintTurn();
};

