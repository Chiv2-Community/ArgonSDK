#pragma once
#include "CoreMinimal.h"
#include "EInviteSendOutcome.generated.h"

UENUM(BlueprintType)
enum class EInviteSendOutcome : uint8 {
    Success,
    AlreadyFriend,
    InvalidFriendCode,
    InviteAlreadyPending,
    FriendOffline,
    UnknownError,
};

