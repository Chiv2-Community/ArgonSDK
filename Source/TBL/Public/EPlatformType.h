#pragma once
#include "CoreMinimal.h"
#include "EPlatformType.generated.h"

UENUM(BlueprintType)
enum EPlatformType {
    EPlatform_PC,
    EPlatform_XboxOne,
    EPlatform_PS4,
    EPlatform_XSX,
    EPlatform_PS5,
    EPlatform_WinGDK,
    EPlatform_MAX UMETA(Hidden),
};

