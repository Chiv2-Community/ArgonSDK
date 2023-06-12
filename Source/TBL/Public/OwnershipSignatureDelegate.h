#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "OwnershipSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOwnershipSignature, EFaction, NewFaction);

