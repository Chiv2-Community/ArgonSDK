#pragma once
#include "CoreMinimal.h"
#include "EAttachMethod.generated.h"

UENUM(BlueprintType)
enum class EAttachMethod : uint8 {
    SocketRelative,
    SocketAbsoluteLocation,
    SocketAbsoluteLocationAndRotation,
};

