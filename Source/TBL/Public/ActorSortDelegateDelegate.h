#pragma once
#include "CoreMinimal.h"
#include "ActorSortDelegateDelegate.generated.h"

class AActor;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FActorSortDelegate, AActor*, LHS, AActor*, RHS, UObject*, BoolProperty);

