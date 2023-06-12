#pragma once
#include "CoreMinimal.h"
#include "PossessedPawnSignatureDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPossessedPawnSignature, APawn*, NewPawn);

