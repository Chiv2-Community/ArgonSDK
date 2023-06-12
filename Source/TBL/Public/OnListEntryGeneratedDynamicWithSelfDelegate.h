#pragma once
#include "CoreMinimal.h"
#include "OnListEntryGeneratedDynamicWithSelfDelegate.generated.h"

class UFriendsAndPartyList;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListEntryGeneratedDynamicWithSelf, UFriendsAndPartyList*, List, UUserWidget*, Widget);

