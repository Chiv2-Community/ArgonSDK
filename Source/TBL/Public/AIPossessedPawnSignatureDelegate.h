#pragma once
#include "CoreMinimal.h"
#include "AIPossessedPawnSignatureDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIPossessedPawnSignature, APawn*, NewPawn);

