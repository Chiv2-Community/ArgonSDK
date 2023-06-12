#pragma once
#include "CoreMinimal.h"
#include "PossessedCharacterDelegate.generated.h"

class AController;
class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPossessedCharacter, ATBLCharacter*, Character, AController*, Controller);

