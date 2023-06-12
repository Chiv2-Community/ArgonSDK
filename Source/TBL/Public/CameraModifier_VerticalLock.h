#pragma once
#include "CoreMinimal.h"
#include "CameraModifier_TurnLock.h"
#include "CameraModifier_VerticalLock.generated.h"

UCLASS(Blueprintable)
class UCameraModifier_VerticalLock : public UCameraModifier_TurnLock {
    GENERATED_BODY()
public:
    UCameraModifier_VerticalLock();
};

