#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Replicated_FVector.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FVector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
public:
    TBL_API FReplicated_FVector();
};

