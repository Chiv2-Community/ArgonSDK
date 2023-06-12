#pragma once
#include "CoreMinimal.h"
#include "ECustomMovementMode.generated.h"

UENUM(BlueprintType)
enum ECustomMovementMode {
    MOVECUSTOM_None,
    MOVECUSTOM_Ladder,
    MOVECUSTOM_Attached,
    MOVECUSTOM_InterpOnDismount,
    MOVECUSTOM_FollowGround,
    MOVECUSTOM_Formation,
    MOVECUSTOM_Spawn,
    MOVECUSTOM_CarriedAttached,
    MOVECUSTOM_MAX UMETA(Hidden),
};

