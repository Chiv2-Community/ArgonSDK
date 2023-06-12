#pragma once
#include "CoreMinimal.h"
#include "CinematicRestrictedControlDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCinematicRestrictedControl, ATBLCharacter*, ThisCharacter);

