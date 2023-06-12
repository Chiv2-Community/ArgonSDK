#pragma once
#include "CoreMinimal.h"
#include "BlueprintOnlineUser.h"
#include "EFriendsListType.h"
#include "OnListEntryRefreshedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListEntryRefreshed, EFriendsListType, List, const FBlueprintOnlineUser&, Item);

