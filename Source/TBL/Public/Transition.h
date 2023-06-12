#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StageInterface.h"
#include "Transition.generated.h"

UCLASS(Abstract, Blueprintable)
class ATransition : public AActor, public IStageInterface {
    GENERATED_BODY()
public:
    ATransition();
    
    // Fix for true pure virtual functions not being implemented
};

