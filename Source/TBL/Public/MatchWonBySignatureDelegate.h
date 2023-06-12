#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "MatchWonBySignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMatchWonBySignature, EFaction, Victor);

