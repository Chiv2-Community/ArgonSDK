#pragma once
#include "CoreMinimal.h"
#include "EPartyJoinabilityConstraint.generated.h"

UENUM(BlueprintType)
enum class EPartyJoinabilityConstraint : uint8 {
    AllowPlayersInMultipleParties,
    IgnoreInvitesIfAlreadyInParty,
};

