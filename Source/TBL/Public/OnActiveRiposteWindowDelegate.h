#pragma once
#include "CoreMinimal.h"
#include "OnActiveRiposteWindowDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActiveRiposteWindow, ATBLCharacter*, Character);

