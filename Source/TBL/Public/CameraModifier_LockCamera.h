#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "Camera/CameraTypes.h"
#include "CameraModifier_LockCamera.generated.h"

UCLASS(Blueprintable)
class UCameraModifier_LockCamera : public UCameraModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimalViewInfo CameraPOV;
    
public:
    UCameraModifier_LockCamera();
};

