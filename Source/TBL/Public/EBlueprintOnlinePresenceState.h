#pragma once
#include "CoreMinimal.h"
#include "EBlueprintOnlinePresenceState.generated.h"

UENUM(BlueprintType)
namespace EBlueprintOnlinePresenceState {
    enum Type {
        Online,
        Offline,
        Away,
        ExtendedAway,
        DoNotDisturb,
        Chat,
        NotFriend,
        InSameLobby,
    };
}

