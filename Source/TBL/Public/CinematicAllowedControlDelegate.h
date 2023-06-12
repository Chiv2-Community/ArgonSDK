#pragma once
#include "CoreMinimal.h"
#include "CinematicAllowedControlDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCinematicAllowedControl, ATBLCharacter*, ThisCharacter);

