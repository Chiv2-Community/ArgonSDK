#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_DisableRootMotionInAir.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_DisableRootMotionInAir : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_DisableRootMotionInAir();
};

