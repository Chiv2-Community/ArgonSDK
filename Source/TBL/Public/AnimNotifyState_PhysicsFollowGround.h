#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_PhysicsFollowGround.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_PhysicsFollowGround : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_PhysicsFollowGround();
};

