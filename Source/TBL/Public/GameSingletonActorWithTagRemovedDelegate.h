#pragma once
#include "CoreMinimal.h"
#include "GameSingletonActorWithTagRemovedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameSingletonActorWithTagRemoved, AActor*, Actor);

