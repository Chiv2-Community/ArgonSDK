#pragma once
#include "CoreMinimal.h"
#include "AllowedCharactersChangedDelegate.generated.h"

class ASpawnWave;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAllowedCharactersChanged, ASpawnWave*, SpawnWave);

