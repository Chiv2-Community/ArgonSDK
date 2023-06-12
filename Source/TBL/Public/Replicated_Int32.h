#pragma once
#include "CoreMinimal.h"
#include "Replicated_Int32.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_Int32 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    TBL_API FReplicated_Int32();
};

