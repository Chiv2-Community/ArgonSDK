#pragma once
#include "CoreMinimal.h"
#include "PushingOverlapCharactersDelegate.generated.h"

class ATBLCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPushingOverlapCharacters, TArray<ATBLCharacterBase*>, Overlaps);

