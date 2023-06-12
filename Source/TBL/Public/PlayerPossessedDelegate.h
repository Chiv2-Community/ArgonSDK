#pragma once
#include "CoreMinimal.h"
#include "PlayerPossessedDelegate.generated.h"

class AController;
class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerPossessed, AController*, Controller, ATBLCharacter*, Character);

