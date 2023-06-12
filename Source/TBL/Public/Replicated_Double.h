#pragma once
#include "CoreMinimal.h"
#include "Replicated_Double.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_Double {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
public:
    TBL_API FReplicated_Double();
};

