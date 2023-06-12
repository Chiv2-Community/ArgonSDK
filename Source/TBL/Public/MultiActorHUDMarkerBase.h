#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EObjectiveZoneVisibilityMode.h"
#include "HUDMarkerInterface.h"
#include "MultiActorHudMarkerArray.h"
#include "ReplicatedSubobjectInterface.h"
#include "MultiActorHUDMarkerBase.generated.h"

class APawn;
class UActorInfoDisplayComponent;
class UHudMarkerDisplayComponent;
class UObjectiveStatusDisplayComponent;
class UObjectiveZoneDisplayComponent;
class UWidgetVisibilityComponent;

UCLASS(Abstract, Blueprintable)
class TBL_API AMultiActorHUDMarkerBase : public AActor, public IHUDMarkerInterface, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEndOfFrameTickEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudMarkerDisplayComponent* HUDMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectiveStatusDisplayComponent* ObjectiveStatusComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorInfoDisplayComponent* ActorInfoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DotProductScoreMultiplier;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> LastDisplayedActorList;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint64, TWeakObjectPtr<AActor>> ManagedActorMap;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint64, TWeakObjectPtr<UWidgetVisibilityComponent>> ManagedComponentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMarkedRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsEnabled, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMultiActorHudMarkerArray FastReplicatedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfMarkersToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentNumberOfMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectiveZoneVisibilityMode ObjectiveZoneVisibilityMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ObjectiveZoneActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfMarkersToDisplayOnZoneVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraMarkerDisplayDuration;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObjectiveZoneDisplayComponent> OwningObjectiveZoneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerIsInOwningZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ExtraMarkerDisplayHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle InitialVisibilityHandle;
    
public:
    AMultiActorHUDMarkerBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetMarkedActors(const TArray<AActor*>& InMarkedActors);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemoveMarkedActor(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnteredZoneChanged(bool bLocalPlayerInsideZone);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnPossessed(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnInitialVisibilityExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnExtraMarkerDisplayExpired();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAuthorityAddedActorDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_ShouldIgnoreMarkedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UWidgetVisibilityComponent*> GetWidgetVisibilityComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObjectiveStatusDisplayComponent* GetObjectiveStatusComponent() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UHudMarkerDisplayComponent*> GetMarkedActorHUDMarkerComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHudMarkerDisplayComponent* GetHUDMarkerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorInfoDisplayComponent* GetActorInfoComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateMarker();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindToObjectiveZone();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AuthoritySetMarkedActors(const TArray<AActor*>& InMarkedActors);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AuthorityRemoveMarkedActor(AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AuthorityAddMarkedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void AddMarkedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ActivateMarker();
    
    
    // Fix for true pure virtual functions not being implemented
};

