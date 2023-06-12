#pragma once
#include "CoreMinimal.h"
#include "SpawnWaveSpawnedCharacterDelegate.generated.h"

class ASpawnWave;
class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnWaveSpawnedCharacter, ASpawnWave*, SpawnWave, ATBLCharacter*, Character);

