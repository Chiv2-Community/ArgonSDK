#pragma once
#include "CoreMinimal.h"
#include "EMovementDirection.generated.h"

UENUM(BlueprintType)
enum EMovementDirection {
    MOVEDIR_None,
    MOVEDIR_Forward,
    MOVEDIR_ForwardLeft,
    MOVEDIR_Left,
    MOVEDIR_BackLeft,
    MOVEDIR_Back,
    MOVEDIR_BackRight,
    MOVEDIR_Right,
    MOVEDIR_ForwardRight,
    MOVEDIR_MAX UMETA(Hidden),
};

