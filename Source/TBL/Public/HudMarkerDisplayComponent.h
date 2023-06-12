#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ActorDisplayInfo.h"
#include "DisplayComponent.h"
#include "EFaction.h"
#include "EInventoryVisibilityCondition.h"
#include "EMarkerType.h"
#include "EMountVisibilityCondition.h"
#include "EObjectiveState.h"
#include "HUDMarkerDisplayUpdateSignatureDelegate.h"
#include "ObjectiveStateChangedDelegate.h"
#include "ObjectiveStateTextChangedDelegate.h"
#include "OnHudMarkerComponentVisibilityChangedDelegate.h"
#include "OnReceivedWidgetVisibilityComponentDelegate.h"
#include "OwningTeamChangedDelegate.h"
#include "PerTeamDisplayInfoChangedSignatureDelegate.h"
#include "PlayerInHudMarkerZoneInterface.h"
#include "ProgressChangedDelegate.h"
#include "ReplicatedArray_ATBLPlayerStatePtr.h"
#include "Replicated_AActorPtr.h"
#include "Replicated_Bool.h"
#include "Replicated_EFaction.h"
#include "Replicated_EObjectiveState.h"
#include "Replicated_FText.h"
#include "Replicated_Float.h"
#include "Templates/SubclassOf.h"
#include "HudMarkerDisplayComponent.generated.h"

class AActor;
class AInventoryItem;
class APlayerController;
class APlayerState;
class ASiegeEngine;
class ATBLPlayerState;
class ATBLTeam;
class UCurveFloat;
class UMaterialInstance;
class UWidgetVisibilityComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHudMarkerDisplayComponent : public UDisplayComponent, public IPlayerInHudMarkerZoneInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicated_AActorPtr ActorToDisplayInfoFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DefaultActorToDisplayInfoFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRelativeAsWorldOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Visible, meta=(AllowPrivateAccess=true))
    FReplicated_Bool Visible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHudMarkerComponentVisibilityChanged OnHudMarkerComponentVisibilityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction VisibleToTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VisibleToTeam, meta=(AllowPrivateAccess=true))
    FReplicated_EFaction VisibleToTeamRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction PlayerVisiblityByFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicatedArray_ATBLPlayerStatePtr VisibleToPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMarkerType MarkerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVisibleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVisibleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocusMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyRenderInLos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyFocusInLos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFocusDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFocusDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PercentFromCenterDistanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PercentFromCenterAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PercentFromCenterScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisibleEvenOnOwnPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumFriendPartyMemberScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseItemVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction ItemVisibilityRelevantFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> InventoryItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryVisibilityCondition VisibilityCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMountVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASiegeEngine> MountClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMountVisibilityCondition MountVisibilityCondition;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidgetVisibilityComponent> WidgetVisibilityComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedWidgetVisibilityComponent OnReceivedWidgetVisibilityComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToBeReplicated;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerTeamDisplayInfoChangedSignature OnPerTeamDisplayInfoChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorDisplayInfo> PerTeamDisplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalPlayerInsideZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectiveState DefaultObjectiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction DefaultOwningTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultAgathaText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultMasonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultTenosiaText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ActiveObjectiveIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ContestedObjectiveIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ObjectiveState, meta=(AllowPrivateAccess=true))
    FReplicated_EObjectiveState ObjectiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Progress, meta=(AllowPrivateAccess=true))
    FReplicated_Float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OwningTeam, meta=(AllowPrivateAccess=true))
    FReplicated_EFaction OwningTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ObjectiveStateText, meta=(AllowPrivateAccess=true))
    FReplicated_FText AgathaText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ObjectiveStateText, meta=(AllowPrivateAccess=true))
    FReplicated_FText MasonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ObjectiveStateText, meta=(AllowPrivateAccess=true))
    FReplicated_FText TenosiaText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceUsePerTeamDisplayInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHUDMarkerDisplayUpdateSignature OnForceUsePerTeamDisplayInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FObjectiveStateChanged OnObjectiveStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FProgressChanged OnProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOwningTeamChanged OnOwningTeamChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FObjectiveStateTextChanged OnObjectiveStateTextChanged;
    
    UHudMarkerDisplayComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool ShouldForceUsePerTeamDisplayInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldClampToScreen() const;
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetVisibilityComponent(UWidgetVisibilityComponent* InWidgetVisibilityComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleToTeam(EFaction NewTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetProgress(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetPerTeamDisplayInfo(const TArray<FActorDisplayInfo>& InPerTeamDisplayInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetOwningTeam(EFaction Value);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveStateText(EFaction Faction, FText Value);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveState(EObjectiveState Value);
    
    UFUNCTION(BlueprintCallable)
    void SetActorToDisplayInfoFor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveIcon(UMaterialInstance* NewIcon);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerFromPlayerVisibilityList(ATBLPlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VisibleToTeam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Visible();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Progress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OwningTeam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectiveStateText();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectiveState();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerTeamReplicated(ATBLTeam* Team);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateReplicated(APlayerState* PS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleFor(APlayerController* PlayerController, bool bCheckVisiblityComponent, bool bVerboseLogging) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable)
    UWidgetVisibilityComponent* GetWidgetVisibilityComponent();
    
    UFUNCTION(BlueprintCallable)
    TArray<ATBLPlayerState*> GetVisibleToPlayersList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScreenLocation(APlayerController* PlayerController, const FVector2D& WidgetSize, bool& bIsOnScreen, bool& bWasClamped) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FActorDisplayInfo GetRelevantDisplayInfo(EFaction Faction, bool bFlip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFaction GetOwningTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetObjectiveStateText(EFaction Faction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EObjectiveState GetObjectiveState();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActorToDisplayInfoFor();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ForceUsePerTeamDisplayInfo();
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerToPlayerVisibilityList(ATBLPlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    void Add(AActor* Actor);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool IsLocalPlayerInHudMarkerZone() override PURE_VIRTUAL(IsLocalPlayerInHudMarkerZone, return false;);
    
};

