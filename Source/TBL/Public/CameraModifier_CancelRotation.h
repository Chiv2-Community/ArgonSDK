#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "CameraModifier_CancelRotation.generated.h"

UCLASS(Blueprintable)
class UCameraModifier_CancelRotation : public UCameraModifier {
    GENERATED_BODY()
public:
    UCameraModifier_CancelRotation();
};

