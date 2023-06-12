#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "TBLAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FTBLAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    TBL_API FTBLAnimInstanceProxy();
};

