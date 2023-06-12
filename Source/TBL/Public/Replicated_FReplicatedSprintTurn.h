#pragma once
#include "CoreMinimal.h"
#include "ReplicatedSprintTurn.h"
#include "Replicated_FReplicatedSprintTurn.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FReplicatedSprintTurn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicatedSprintTurn Value;
    
public:
    TBL_API FReplicated_FReplicatedSprintTurn();
};

