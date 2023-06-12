#pragma once
#include "CoreMinimal.h"
#include "EPushableMovementType.h"
#include "Replicated_EPushableMovementType.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_EPushableMovementType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPushableMovementType Value;
    
public:
    TBL_API FReplicated_EPushableMovementType();
};

