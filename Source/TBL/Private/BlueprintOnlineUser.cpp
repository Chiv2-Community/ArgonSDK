#include "BlueprintOnlineUser.h"

FBlueprintOnlineUser::FBlueprintOnlineUser() {
    this->Platform = ECrossplayPlatform::PlayStation;
    this->bIsSynthetic = false;
    this->bIsFriend = false;
    this->bIsOnline = false;
    this->bIsAway = false;
    this->bIsExtendedAway = false;
    this->bIsDoNotDisturb = false;
    this->bIsPlaying = false;
    this->bIsPlayingThisGame = false;
    this->bIsJoinable = false;
    this->bHasVoiceSupport = false;
    this->bIsBlocked = false;
    this->bIsRecent = false;
    this->bIsInAParty = false;
    this->bIsInSameParty = false;
    this->bIsPartyLeader = false;
    this->bHasOutgoingPartyInvite = false;
    this->bHasIncomingPartyInvite = false;
    this->bIsNative = false;
    this->bIsInMatch = false;
    this->bCrossplayServer = false;
    this->bWrongPlatformServer = false;
}

