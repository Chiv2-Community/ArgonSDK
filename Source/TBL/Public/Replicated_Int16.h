#pragma once
#include "CoreMinimal.h"
#include "Replicated_Int16.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_Int16 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Value;
    
public:
    TBL_API FReplicated_Int16();
};

