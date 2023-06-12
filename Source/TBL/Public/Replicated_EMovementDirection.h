#pragma once
#include "CoreMinimal.h"
#include "EMovementDirection.h"
#include "Replicated_EMovementDirection.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_EMovementDirection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementDirection> Value;
    
public:
    TBL_API FReplicated_EMovementDirection();
};

