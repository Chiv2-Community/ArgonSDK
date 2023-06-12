#pragma once
#include "CoreMinimal.h"
#include "EOnlineItemUnlockType.generated.h"

UENUM(BlueprintType)
namespace EOnlineItemUnlockType {
    enum Type {
        GrantedByProgression,
        GrantedBySpecialEdition,
        GrantedByPreOrder,
        GrantedByPlaytimeDrop,
    };
}

