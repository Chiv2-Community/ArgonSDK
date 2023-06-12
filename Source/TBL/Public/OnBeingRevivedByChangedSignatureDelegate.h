#pragma once
#include "CoreMinimal.h"
#include "OnBeingRevivedByChangedSignatureDelegate.generated.h"

class ATBLCharacter;
class ATBLPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeingRevivedByChangedSignature, ATBLCharacter*, ThisCharacter, ATBLPlayerState*, BeingRevivedBy);

