#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/LatentActionManager.h"
#include "DataTableRowSelection.h"
#include "EPushableMovementType.h"
#include "ETeamCapturePointComponentState.h"
#include "FollowerPushableComponentProperties.h"
#include "OnPushableActivatedDelegate.h"
#include "OnPushableCompletedDelegate.h"
#include "OnPushableMovementTypeChangedDelegate.h"
#include "OnPushableProgressUpdatedDelegate.h"
#include "OnPushableReachedEndPointDelegate.h"
#include "PushableComponentProperties.h"
#include "PushableEndPoint.h"
#include "ReplicatedArray_PushableEndPoints.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_AActorPtr.h"
#include "Replicated_Bool.h"
#include "Replicated_EPushableMovementType.h"
#include "Replicated_FFollowerPushableComponentProperties.h"
#include "Replicated_FPushableComponentProperties.h"
#include "Replicated_Float.h"
#include "Replicated_Float_FullPrecision.h"
#include "Replicated_FollowerPushables.h"
#include "Replicated_Int32.h"
#include "Replicated_UInt8.h"
#include "TBLBlueprintCompilerInterface.h"
#include "PushableComponent.generated.h"

class AActor;
class APushableSplineActor;
class ATBLCharacter;
class ATBLTeam;
class UAkAudioEvent;
class UAkComponent;
class UHudMarkerDisplayComponent;
class UPrimitiveComponent;
class UPushingComponent;
class USkeletalMeshComponent;
class USplineComponent;
class UStatsComponent;
class UTeamCapturePointComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPushableComponent : public UActorComponent, public IReplicatedSubobjectInterface, public ITBLBlueprintCompilerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamCapturePointComponent* TeamCapturePointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudMarkerDisplayComponent* ObjectiveStatusDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsComponent* StatsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APushableSplineActor* SplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedSplineActor, meta=(AllowPrivateAccess=true))
    FReplicated_AActorPtr ReplicatedSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPushableMovementType PushableMovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PushableMovementType, meta=(AllowPrivateAccess=true))
    FReplicated_EPushableMovementType ReplicatedPushableMovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> FollowerPushables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FollowerPushables, meta=(AllowPrivateAccess=true))
    FReplicated_FollowerPushables ReplicatedFollowerPushables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToCompleteSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Float ReplicatedTimeToCompleteSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> PlayMovingSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> StopMovingSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePawnCollisionOnSkeletalMeshWhenActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestExperimentalTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleportWithPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDisableOfPhysicsForOneTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PushableActive, meta=(AllowPrivateAccess=true))
    FReplicated_Bool PushableActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PushableProgressAuthority, meta=(AllowPrivateAccess=true))
    FReplicated_Float_FullPrecision PushableProgressAuthority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentEndPoint, meta=(AllowPrivateAccess=true))
    FReplicated_Int32 CurrentEndPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushableProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateMarkerWithProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowHudProgressForCurrentSplineSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateMarkerWithHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedMovementState, meta=(AllowPrivateAccess=true))
    FReplicated_UInt8 ReplicatedMovementState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPushableActivated OnPushableActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPushableCompleted OnPushableCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPushableProgressUpdated OnPushableProgressUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPushableReachedEndPoint OnPushableReachedEndPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPushableMovementTypeChanged OnPushableMovementTypeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPushableComponentProperties PushableComponentProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PushableComponentProperties, meta=(AllowPrivateAccess=true))
    FReplicated_FPushableComponentProperties ReplicatedPushableComponentProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFollowerPushableComponentProperties FollowerPushableComponentProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FollowerPushableComponentProperties, meta=(AllowPrivateAccess=true))
    FReplicated_FFollowerPushableComponentProperties ReplicatedFollowerPushableComponentProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPushableEndPoint> PushableEndPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PushableEndPoints, meta=(AllowPrivateAccess=true))
    FReplicatedArray_PushableEndPoints ReplicatedPushableEndPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowSelection PushingIntervalScoreEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowSelection PushingCompleteScoreEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeBasedWhilePushable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeaderStartingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PushingCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OwnerSiegeMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* OwnerAKComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPushingComponent* OwnersPushingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Bool PushableIsReversing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Float PushableReverseEndProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<int32> CompletedEndPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsPlayingTravelSound;
    
public:
    UPushableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SkipToEndOfCurrentEndPoint();
    
    UFUNCTION(BlueprintCallable)
    void SetPushingCollisionComponent(UPrimitiveComponent* NewPushingCollisionComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetPushableMovementType(EPushableMovementType NewMovementType);
    
    UFUNCTION(BlueprintCallable)
    void SetPushableComponentProperties(FPushableComponentProperties Props);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowerPushableComponentProperties(FFollowerPushableComponentProperties Props);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentEndPointCinematic(bool CinematicEndPoint);
    
    UFUNCTION(BlueprintCallable)
    void ReversePushableByDistance(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void ResetProgress(float NewProgress);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void ReConfigurePushable(EPushableMovementType NewMovementType, FPushableComponentProperties IndependentAndLeaderProperties, FFollowerPushableComponentProperties FollowerProperties, APushableSplineActor* NewSplineActor, TArray<FPushableEndPoint> NewEndPoints, TArray<AActor*> NewFollowerPushables, float TimeToComplete, float TravelSpeedToNewSpline, FLatentActionInfo LatentInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void PushableMoveDelegateComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void ProceedToNextEndPoint();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedSplineActor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMovementState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PushableProgressAuthority();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PushableMovementType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PushableEndPoints();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PushableComponentProperties();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PushableActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FollowerPushables();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FollowerPushableComponentProperties();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentEndPoint();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayersInCaptureVolumeChanged(const TArray<ATBLCharacter*>& Players);
    
    UFUNCTION(BlueprintCallable)
    void OnOwningTeamHasChanged(ATBLTeam* OwningTeam);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float Amount, AActor* Initiator);
    
    UFUNCTION(BlueprintCallable)
    void OnControllingTeamHasChanged(ATBLTeam* ControllingTeam);
    
    UFUNCTION(BlueprintCallable)
    void OnCaptureStateChanged(TEnumAsByte<ETeamCapturePointComponentState::Type> CaptureState);
    
    UFUNCTION(BlueprintCallable)
    bool IsPushableActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIndependent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFollower() const;
    
private:
    UFUNCTION(BlueprintCallable)
    APushableSplineActor* GetSplineActor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UPrimitiveComponent*> GetSimulatingPhysicsComponents();
    
    UFUNCTION(BlueprintCallable)
    UPrimitiveComponent* GetPushingCollisionComponent();
    
    UFUNCTION(BlueprintCallable)
    void GetPushableProgressSummary(float& Progress, FPushableEndPoint& OutCurrentEndPoint, float& ProgressPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressToNextPoint() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FollowerPushableMovementTypeUpdated();
    
    UFUNCTION(BlueprintCallable)
    void CheckForBlockingItemCollision();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddPushableAuthorityProgress(float Progress);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePushable(bool Active);
    
    
    // Fix for true pure virtual functions not being implemented
};

