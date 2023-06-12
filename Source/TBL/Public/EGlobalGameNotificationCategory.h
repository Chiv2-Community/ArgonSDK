#pragma once
#include "CoreMinimal.h"
#include "EGlobalGameNotificationCategory.generated.h"

UENUM(BlueprintType)
enum class EGlobalGameNotificationCategory : uint8 {
    Display,
    Alert,
    Error,
    Social,
    Online,
    Matchmaking,
};

