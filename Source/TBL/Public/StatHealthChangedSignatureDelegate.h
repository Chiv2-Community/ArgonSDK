#pragma once
#include "CoreMinimal.h"
#include "StatHealthChangedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatHealthChangedSignature, float, Amount, AActor*, Initiator);

