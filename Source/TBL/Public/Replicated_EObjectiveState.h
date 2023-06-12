#pragma once
#include "CoreMinimal.h"
#include "EObjectiveState.h"
#include "Replicated_EObjectiveState.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_EObjectiveState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectiveState Value;
    
public:
    TBL_API FReplicated_EObjectiveState();
};

