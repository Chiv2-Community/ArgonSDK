#pragma once
#include "CoreMinimal.h"
#include "OnFriendsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFriendsUpdated, const TSet<FString>&, ChangedUsers);

