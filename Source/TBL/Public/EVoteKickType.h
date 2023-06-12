#pragma once
#include "CoreMinimal.h"
#include "EVoteKickType.generated.h"

UENUM(BlueprintType)
enum class EVoteKickType : uint8 {
    None,
    NoVoting,
    TeamVoting,
    AllVoting,
};

