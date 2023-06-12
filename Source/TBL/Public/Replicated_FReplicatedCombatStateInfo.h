#pragma once
#include "CoreMinimal.h"
#include "ReplicatedCombatStateInfo.h"
#include "Replicated_FReplicatedCombatStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FReplicatedCombatStateInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicatedCombatStateInfo Value;
    
public:
    TBL_API FReplicated_FReplicatedCombatStateInfo();
};

