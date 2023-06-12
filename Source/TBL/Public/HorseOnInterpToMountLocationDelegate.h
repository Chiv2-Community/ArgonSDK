#pragma once
#include "CoreMinimal.h"
#include "HorseOnInterpToMountLocationDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHorseOnInterpToMountLocation, FName, AnimationName, ATBLCharacter*, Character);

