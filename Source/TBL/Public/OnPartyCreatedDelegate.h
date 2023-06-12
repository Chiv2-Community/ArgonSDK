#pragma once
#include "CoreMinimal.h"
#include "OnPartyCreatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPartyCreated, const bool, Result, const FString&, PartyId);

