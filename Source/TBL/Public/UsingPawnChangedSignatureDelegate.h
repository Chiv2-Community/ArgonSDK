#pragma once
#include "CoreMinimal.h"
#include "UsingPawnChangedSignatureDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUsingPawnChangedSignature, APawn*, Pawn);

