#pragma once
#include "CoreMinimal.h"
#include "EEOSUserInterface_SwitchToCrossPlatformAccount_Choice.generated.h"

UENUM(BlueprintType)
enum class EEOSUserInterface_SwitchToCrossPlatformAccount_Choice : uint8 {
    SwitchToThisAccount,
    LinkADifferentAccount,
    CancelLinking,
    EEOSUserInterface_SwitchToCrossPlatformAccount_MAX UMETA(Hidden),
};

