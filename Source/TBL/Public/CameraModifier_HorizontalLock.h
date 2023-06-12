#pragma once
#include "CoreMinimal.h"
#include "CameraModifier_TurnLock.h"
#include "CameraModifier_HorizontalLock.generated.h"

UCLASS(Blueprintable)
class UCameraModifier_HorizontalLock : public UCameraModifier_TurnLock {
    GENERATED_BODY()
public:
    UCameraModifier_HorizontalLock();
};

