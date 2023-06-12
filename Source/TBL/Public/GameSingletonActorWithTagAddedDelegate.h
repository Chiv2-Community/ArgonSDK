#pragma once
#include "CoreMinimal.h"
#include "GameSingletonActorWithTagAddedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameSingletonActorWithTagAdded, AActor*, Actor);

