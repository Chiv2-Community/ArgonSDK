#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "OnRefreshServerCompleteDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRefreshServerComplete, FBlueprintSessionResult, SessionResult, UUserWidget*, ServerEntryWidget);

