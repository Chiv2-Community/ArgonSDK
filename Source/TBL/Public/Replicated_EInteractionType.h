#pragma once
#include "CoreMinimal.h"
#include "EInteractionType.h"
#include "Replicated_EInteractionType.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_EInteractionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionType Value;
    
public:
    TBL_API FReplicated_EInteractionType();
};

