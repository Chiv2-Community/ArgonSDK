#pragma once
#include "CoreMinimal.h"
#include "HorseWantsToGallopDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHorseWantsToGallop, bool, bWantsToGallop);

