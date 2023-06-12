#pragma once
#include "CoreMinimal.h"
#include "OnVaultSignatureDelegate.generated.h"

class AVaultMarker;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVaultSignature, AVaultMarker*, VaultMarker);

