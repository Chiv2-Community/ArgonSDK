#pragma once
#include "CoreMinimal.h"
#include "EEOSUserInterface_SignInOrCreateAccount_Choice.generated.h"

UENUM(BlueprintType)
enum class EEOSUserInterface_SignInOrCreateAccount_Choice : uint8 {
    SignIn,
    CreateAccount,
    EEOSUserInterface_SignInOrCreateAccount_MAX UMETA(Hidden),
};

