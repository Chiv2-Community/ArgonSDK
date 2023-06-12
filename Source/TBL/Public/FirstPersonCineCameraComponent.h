#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECinematicCameraTargetLockMode.h"
#include "FirstPersonCineCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFirstPersonCineCameraComponent : public UCineCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SecondsBeforeTakingOverCameraMin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SecondsBeforeTakingOverCameraMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsSpentOutOfRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CameraTakeoverMinAngle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CameraTakeoverMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SnapBackRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bCanLockRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FRotator CameraRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bAlwaysUsePawnPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bAlwaysUsePawnYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToldPCToIgnoreLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableThirdPersonMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector CameraLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector InterpCameraRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECinematicCameraTargetLockMode CameraLockMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHorizontalLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalLockYaw;
    
    UFirstPersonCineCameraComponent();
};

