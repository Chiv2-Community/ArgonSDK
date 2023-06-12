#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SpectatorPawn.h"
#include "GameplayTagContainer.h"
#include "SmoothSpectatorTurn.h"
#include "SpectatorCamInfo.h"
#include "SpectatorCameraConfig.h"
#include "TBLSpectatorPawn.generated.h"

class APlayerState;
class ATBLCharacter;
class UCameraComponent;
class UCinematicState;

UCLASS(Blueprintable)
class ATBLSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FSpectatorCameraConfig DefaultCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FSpectatorCameraConfig> SmoothCameras;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpectatorCamInfo> SpectatorCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* FollowCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* FollowPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZoomDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmoothSpectatorTurn> SmoothTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnChangeDirBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpectatorSpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpectatorSpeedDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpectatorRightStickSensitivityIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpectatorRightStickSensitivityDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetIdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastResetIdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetIdleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayDebugScrollDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayDebugScrollY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDidAutoSpectatorFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCachedViewRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpectatorRollHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CachedViewRotation;
    
public:
    ATBLSpectatorPawn();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateOnCinematicStateChanged(FGameplayTag PreviousStateTag, UCinematicState* PreviousState, FGameplayTag NewStateTag, UCinematicState* NewState);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SpectatorFollow(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpectatorCam(int32 CameraNum);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ProcessTurnAndLookInputRate(const TEnumAsByte<EAxis::Type> Axis, const float Rate);
    
    UFUNCTION(BlueprintCallable)
    void ProcessTurnAndLookInput(const TEnumAsByte<EAxis::Type> Axis, const float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreviousCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NextCharacter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockSpectatorTranslationAxis(FName AxisName, bool Blocked);
    
    UFUNCTION(BlueprintCallable)
    bool IsGhost() const;
    
    UFUNCTION(BlueprintCallable)
    void GhostOff();
    
    UFUNCTION(BlueprintCallable)
    void Ghost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FreeCam();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableSmoothCameraMode(int32 CameraNum);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollUp();
    
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollReleased();
    
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollDown();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ClearSpectatorCams();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddTurnAcceleration(float Val, int32 Axis);
    
};

