#pragma once
#include "CoreMinimal.h"
#include "CPPlayerAddedDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCPPlayerAdded, ATBLCharacter*, Character);

