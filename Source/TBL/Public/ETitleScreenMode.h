#pragma once
#include "CoreMinimal.h"
#include "ETitleScreenMode.generated.h"

UENUM(BlueprintType)
enum class ETitleScreenMode : uint8 {
    Start,
    Welcome,
    WelcomeWithOffline,
    CheckMaintenance,
    LoginPlatformAndEOS,
    LoginPlatformAuthCode,
    PrivilegeCheck,
    CrossplayCheck,
    LoginPlayFab,
    TOS,
    End,
    PlayTutorialPrompt,
    OwnershipFailed,
};

