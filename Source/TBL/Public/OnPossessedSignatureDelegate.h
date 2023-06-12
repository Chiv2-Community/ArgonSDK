#pragma once
#include "CoreMinimal.h"
#include "OnPossessedSignatureDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPossessedSignature, AController*, InController);

