#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RagdollTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FRagdollTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    TBL_API FRagdollTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRagdollTickFunction> : public TStructOpsTypeTraitsBase2<FRagdollTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

