#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavigationAvoidanceTypes.h"
#include "AI/RVOAvoidanceInterface.h"
#include "ESiegeActorState.h"
#include "HUDMarkerInterface.h"
#include "OnPushableCompletedDelegate.h"
#include "OnPushableReachedEndPointDelegate.h"
#include "PushableEndPoint.h"
#include "Replicated_UInt8.h"
#include "TBLActor.h"
#include "PushableSiegeActor.generated.h"

class UAkComponent;
class UBoxComponent;
class UHudMarkerDisplayComponent;
class UPhysicsAsset;
class UPushableComponent;
class UPushingComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UTBLNavModifierComponent;
class UTeamCapturePointComponent;

UCLASS(Blueprintable, Config=Game)
class APushableSiegeActor : public ATBLActor, public IHUDMarkerInterface, public IRVOAvoidanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneComponent;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvoidanceUID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAvoidanceMask AvoidanceGroup;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRVOAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AvoidanceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* StationaryPhysAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PushablePhysAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* StationaryPhysAssetLowLod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PushablePhysAssetLowLod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDedicatedServerUseLowLodPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowLodPhysAssetLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPushableComponent* PushableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPushingComponent* PushingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamCapturePointComponent* TeamCapturePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudMarkerDisplayComponent* HudMarkerDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLNavModifierComponent* TBLNavModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SiegeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PawnPushingCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HudMarkerComponentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedSiegeState, meta=(AllowPrivateAccess=true))
    FReplicated_UInt8 ReplicatedSiegeState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPushableReachedEndPoint PushableReachedEndPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPushableCompleted PushableComplete;
    
public:
    APushableSiegeActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSkeletalMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SiegeStateAnimationUpdated(ESiegeActorState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetSiegeState(ESiegeActorState NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceEnabled(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedSiegeState();
    
    UFUNCTION(BlueprintCallable)
    void OnPushableReachedEndPoint(int32 EndPointNum, FPushableEndPoint EndPoint, bool IsLastEndPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnPushableCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnPushableActivated(bool bIsActive);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshLODChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddLogEntry(const FString& LogEntry);
    
    
    // Fix for true pure virtual functions not being implemented
};

