#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "LastSpectatorPOV.h"
#include "PropertyModifiers.h"
#include "Templates/SubclassOf.h"
#include "TBLPlayerCameraManager.generated.h"

class AActor;
class ATBLCharacter;
class UCameraComponent;
class UCameraModifier_ArrowCam;
class UCameraModifier_BlendInRotation;
class UCameraModifier_CancelRotation;
class UCameraModifier_DeathCam;
class UCameraModifier_DeathCam1P;
class UCameraModifier_FollowAnimation;
class UCameraModifier_HorizontalLock;
class UCameraModifier_Offset;
class UCameraModifier_SpawnFadeOut;
class UCameraModifier_TurnLimit;
class UCameraModifier_TurnLock;
class UCameraModifier_VerticalLock;
class UCameraModifier_Zoom;
class UPostProcessComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class ATBLPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraModifier_TurnLimit* CameraTurnLimitMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraModifier_Zoom* CameraZoomMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraModifier_Offset* CameraOffsetMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraModifier_CancelRotation* CameraCancelRotationMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraModifier_DeathCam* CameraDeathMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraModifier_DeathCam1P* CameraDeathMod_1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraModifier_BlendInRotation* CameraBlendInRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCameraAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLastSpectatorPOV LastSpectatorPOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* CharacterStatesPostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* OutOfCombatPostProcessComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraModifier_TurnLimit> CameraTurnLimitModClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraModifier_HorizontalLock> CameraHorizontalLockModClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraModifier_VerticalLock> CameraVerticalLockModClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraModifier_DeathCam> CameraDeathModClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraModifier_DeathCam1P> CameraDeathModClass_1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraModifierId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UCameraModifier_TurnLock*> CameraModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FPropertyModifiers> CameraShakePropertyModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraModifier_ArrowCam* ArrowCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraModifier_SpawnFadeOut* SpawnFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraModifier_FollowAnimation* FollowAnimation;
    
public:
    ATBLPlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    void ToggleSpectatorCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDoSpawnFadeOut() const;
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMeshChanged(USkeletalMeshComponent* OldMesh, USkeletalMeshComponent* NewMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnFadeOutEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActualViewTarget() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    UCameraComponent* GetActiveCameraComponent();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableSpawnFadeOut(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void EnableDeathCam_1P(AActor* Killed);
    
    UFUNCTION(BlueprintCallable)
    void EnableDeathCam(ATBLCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void DisableSpawnFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void DisableDeathCam(bool bImmediate);
    
};

