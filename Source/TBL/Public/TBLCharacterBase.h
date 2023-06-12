#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterSignificanceState.h"
#include "EMeshVisibilityFlag.h"
#include "ETrapEventResult.h"
#include "OnRecentlyRenderedDelegate.h"
#include "OnRootTransformUpdatedDelegate.h"
#include "PhysMatFallingDamageMultiplier.h"
#include "SignificanceInterface.h"
#include "TBLCharacterBase.generated.h"

class UDamageSource;
class UObject;
class UTBLCharacterMovementBaseComponent;

UCLASS(Blueprintable)
class TBL_API ATBLCharacterBase : public ACharacter, public ISignificanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterSignificanceState SignificanceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLCharacterMovementBaseComponent* MovementBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecentlyRendered OnRecentlyRendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasRecentlyRendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastAnimUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRootMotionActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMontageActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponTracersActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitingForAnimNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreFaceRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCarryableNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastCarryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshVisibilityFlag MeshVisibilityFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HiddenAnimUpdateMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillUponLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageStartingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageSource* FallDamageSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysMatFallingDamageMultiplier> FallingDamagePhysMatMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipClientOptimizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlacedInWorld;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRootTransformUpdated OnRootTransformUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultFallDamageScale;
    
public:
    ATBLCharacterBase();
    UFUNCTION(BlueprintCallable)
    void TrapEvent(ETrapEventResult Result, UObject* TrapObject);
    
    UFUNCTION(BlueprintCallable)
    void ShowThirdPersonMesh();
    
    UFUNCTION(BlueprintCallable)
    void SetFallDamageScale(float InFallDamageScale);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCinematicSpawnInEnabled(const UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTrapEvent(ETrapEventResult Result, UObject* TrapObject, float ClientTimeStamp);
    
    UFUNCTION(BlueprintCallable)
    void PreRecalcRequiredBones_Mesh1P();
    
    UFUNCTION(BlueprintCallable)
    void PostRecalcRequiredBones_Mesh1P();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetable() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRagdollCustomTick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPerson() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCustomizationCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceCharacterWasCarried() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMeshVisibilityFlag GetMeshVisibilityFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFallDamageScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultFallDamageScale();
    
    UFUNCTION(BlueprintCallable)
    float GetCreationTime();
    
    UFUNCTION(BlueprintCallable)
    void EnableMeshCollisionForFakeClient();
    
    UFUNCTION(BlueprintCallable)
    void DisableMeshCollisionForFakeClient();
    
    
    // Fix for true pure virtual functions not being implemented
};

