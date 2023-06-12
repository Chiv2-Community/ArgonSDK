#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SavedClassUnavailableDelegate.generated.h"

class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSavedClassUnavailable, TSubclassOf<ATBLCharacter>, RequestedSubclass);

