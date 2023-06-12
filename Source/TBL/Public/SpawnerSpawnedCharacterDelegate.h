#pragma once
#include "CoreMinimal.h"
#include "SpawnerSpawnedCharacterDelegate.generated.h"

class ASpawner;
class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnerSpawnedCharacter, ASpawner*, Spawner, ATBLCharacter*, Character);

