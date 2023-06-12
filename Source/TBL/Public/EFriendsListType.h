#pragma once
#include "CoreMinimal.h"
#include "EFriendsListType.generated.h"

UENUM(BlueprintType)
enum class EFriendsListType : uint8 {
    Friends_All,
    Friends_Online,
    Friends_PlayingSameGame,
    Friends_AllNotPlayingSameGame,
    Friends_OnlineNotPlayingSameGame,
    Party,
    PartyInvites,
    Recent,
    Blocked,
    DummyList,
};

