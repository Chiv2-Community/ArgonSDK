#pragma once
#include "CoreMinimal.h"
#include "Replicated_Float_FullPrecision.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_Float_FullPrecision {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    TBL_API FReplicated_Float_FullPrecision();
};

