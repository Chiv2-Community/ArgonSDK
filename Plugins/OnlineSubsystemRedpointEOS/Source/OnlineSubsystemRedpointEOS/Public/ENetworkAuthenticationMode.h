#pragma once
#include "CoreMinimal.h"
#include "ENetworkAuthenticationMode.generated.h"

UENUM(BlueprintType)
enum class ENetworkAuthenticationMode : uint8 {
    Default,
    IDToken,
    UserCredentials,
    Off,
};

