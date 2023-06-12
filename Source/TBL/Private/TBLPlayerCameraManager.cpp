#include "TBLPlayerCameraManager.h"
#include "Components/PostProcessComponent.h"
#include "CameraModifier_HorizontalLock.h"
#include "CameraModifier_TurnLimit.h"
#include "CameraModifier_VerticalLock.h"

void ATBLPlayerCameraManager::ToggleSpectatorCamera() {
}

bool ATBLPlayerCameraManager::ShouldDoSpawnFadeOut() const {
    return false;
}

void ATBLPlayerCameraManager::OnPlayerMeshChanged(USkeletalMeshComponent* OldMesh, USkeletalMeshComponent* NewMesh) {
}

bool ATBLPlayerCameraManager::IsSpawnFadeOutEnabled() const {
    return false;
}

AActor* ATBLPlayerCameraManager::GetActualViewTarget() const {
    return NULL;
}

UCameraComponent* ATBLPlayerCameraManager::GetActiveCameraComponent() {
    return NULL;
}

void ATBLPlayerCameraManager::EnableSpawnFadeOut(float Duration) {
}

void ATBLPlayerCameraManager::EnableDeathCam_1P(AActor* Killed) {
}

void ATBLPlayerCameraManager::EnableDeathCam(ATBLCharacter* KilledCharacter) {
}

void ATBLPlayerCameraManager::DisableSpawnFadeOut() {
}

void ATBLPlayerCameraManager::DisableDeathCam(bool bImmediate) {
}

ATBLPlayerCameraManager::ATBLPlayerCameraManager() {
    this->CameraTurnLimitMod = NULL;
    this->CameraZoomMod = NULL;
    this->CameraOffsetMod = NULL;
    this->CameraCancelRotationMod = NULL;
    this->CameraDeathMod = NULL;
    this->CameraDeathMod_1P = NULL;
    this->CameraBlendInRotation = NULL;
    this->bIsFirstPerson = true;
    this->bDisableCameraAnims = false;
    this->CharacterStatesPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("CharacterStatesPostProcessComponent"));
    this->OutOfCombatPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("OutOfCombatPostProcessComponent"));
    this->CameraTurnLimitModClass = UCameraModifier_TurnLimit::StaticClass();
    this->CameraHorizontalLockModClass = UCameraModifier_HorizontalLock::StaticClass();
    this->CameraVerticalLockModClass = UCameraModifier_VerticalLock::StaticClass();
    this->CameraModifierId = 0;
    this->bLoopCameraShake = false;
    this->ArrowCam = NULL;
    this->SpawnFadeOut = NULL;
    this->FollowAnimation = NULL;
}

