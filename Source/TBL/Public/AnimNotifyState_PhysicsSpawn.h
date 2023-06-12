#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_PhysicsSpawn.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_PhysicsSpawn : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_PhysicsSpawn();
};

