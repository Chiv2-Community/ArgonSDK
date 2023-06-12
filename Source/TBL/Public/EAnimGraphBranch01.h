#pragma once
#include "CoreMinimal.h"
#include "EAnimGraphBranch01.generated.h"

UENUM(BlueprintType)
enum class EAnimGraphBranch01 : uint8 {
    Default,
    IsDeath,
    IsMiniAnim,
    IsServer,
    IsSimulatedCloth,
};

