#pragma once
#include "CoreMinimal.h"
#include "InvocationComplete.h"
#include "StressTest.generated.h"

USTRUCT(BlueprintType)
struct TBL_API FStressTest : public FInvocationComplete {
    GENERATED_BODY()
public:
    FStressTest();
};

