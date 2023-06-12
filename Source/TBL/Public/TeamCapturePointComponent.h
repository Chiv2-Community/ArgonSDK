#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CPOwningTeamHasChangedDelegate.h"
#include "CPPlayerAddedDelegate.h"
#include "CPProgressChangeDelegate.h"
#include "CPStateChangedDelegate.h"
#include "CPTickEventDelegate.h"
#include "DataTableRowSelection.h"
#include "DeathDamageTakenEvent.h"
#include "DisplayComponentControls.h"
#include "EFaction.h"
#include "ETeamCapturePointComponentState.h"
#include "ObjectiveStatusDisplayComponentStruct.h"
#include "OverlappedCharacterList.h"
#include "PlayersUpdateInTeamCPComponentDelegate.h"
#include "ReplicatedArray_ATBLCharacterPtr.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_ATBLTeamPtr.h"
#include "Replicated_Bool.h"
#include "Replicated_ECapturePointState.h"
#include "Replicated_FTeamCapturePointComponentProperties.h"
#include "Replicated_Float.h"
#include "TBLBlueprintCompilerInterface.h"
#include "TeamCapturePointComponentProperties.h"
#include "TeamCapturePointComponent.generated.h"

class AActor;
class ATBLCharacter;
class ATBLTeam;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTeamCapturePointComponent : public UActorComponent, public IReplicatedSubobjectInterface, public ITBLBlueprintCompilerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamCapturePointComponentProperties TeamCapturePointComponentProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Properties, meta=(AllowPrivateAccess=true))
    FReplicated_FTeamCapturePointComponentProperties ReplicatedTeamCapturePointComponentProperties;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersUpdateInTeamCPComponent PlayersInCaptureVolumeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPStateChanged CaptureStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPOwningTeamHasChanged OnOwningTeamHasChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPOwningTeamHasChanged OnControllingTeamHasChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPProgressChange OnProgressChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Progress, meta=(AllowPrivateAccess=true))
    FReplicated_Float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayersInTeamCapturePoint, meta=(AllowPrivateAccess=true))
    FReplicatedArray_ATBLCharacterPtr PlayersInCaptureVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CaptureState, meta=(AllowPrivateAccess=true))
    FReplicated_ECapturePointState CurrentCaptureState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_ECapturePointState PreviousCaptureState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OwningTeamChanged, meta=(AllowPrivateAccess=true))
    FReplicated_ATBLTeamPtr OwningTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControllingTeamChanged, meta=(AllowPrivateAccess=true))
    FReplicated_ATBLTeamPtr ControllingTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_ATBLTeamPtr ProgressGainedByTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_Bool bIsImmune;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPTickEvent TickEventFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPPlayerAdded OnPlayerAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPPlayerAdded OnPlayerRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveStatusDisplayComponentStruct ObjectiveStatusDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplayComponentControls DisplayComponentControls;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefenderCanGetScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FOverlappedCharacterList> TrackedCharactersByActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OtherOverlapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAwardCaptureInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CaptureIntervalScoreInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowSelection CaptureIntervalScoreEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAwardScoreWhenCaptured;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, TWeakObjectPtr<ATBLCharacter>> CharacterIDMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> OverlapComponents;
    
public:
    UTeamCapturePointComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTeamCapturePointProperties(FTeamCapturePointComponentProperties Props);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDefendingTeamAllowedToGainScore(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureState(TEnumAsByte<ETeamCapturePointComponentState::Type> NewState);
    
    UFUNCTION(BlueprintCallable)
    void ResetCapturePoint();
    
    UFUNCTION(BlueprintCallable)
    void RefreshActorsInCaptureZone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayerSatisfiesCaptureRequirments(ATBLCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackedCharacterKilled(const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackedCharacterDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Properties();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Progress();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersInTeamCapturePoint();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OwningTeamChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ControllingTeamChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CaptureState();
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivated(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void OnActivated(UActorComponent* Component, bool bReset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLTeam* GetProgressGainedByTeam();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerNumbersForFaction(EFaction Faction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLTeam* GetOwningTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsImmune();
    
    UFUNCTION(BlueprintCallable)
    ATBLTeam* GetControllingTeam(bool& IsTie);
    
    UFUNCTION(BlueprintCallable)
    void EndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateTeamCapturePoint();
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void ActivateTeamCapturePoint();
    
    
    // Fix for true pure virtual functions not being implemented
};

