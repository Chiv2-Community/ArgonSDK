#pragma once
#include "CoreMinimal.h"
#include "ECinematicCameraTargetLockMode.generated.h"

UENUM(BlueprintType)
enum class ECinematicCameraTargetLockMode : uint8 {
    Forward,
    Tracking,
    LockForward,
    LockTracking,
};

