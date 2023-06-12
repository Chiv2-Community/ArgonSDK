#pragma once
#include "CoreMinimal.h"
#include "EHardwarePlatform.generated.h"

UENUM(BlueprintType)
enum class EHardwarePlatform : uint8 {
    Platform_Windows,
    Platform_WindowsSteam,
    Platform_WindowsEOS,
    Platform_Linux,
    Platform_XboxOne,
    Platform_PS4,
    Platform_XSX,
    Platform_PS5,
    Platform_WinGDK,
    Platform_Unknown,
    Platform_MAX UMETA(Hidden),
};

