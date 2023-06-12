#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlockedStatusUpdatedDelegate.h"
#include "DeathDamageTakenEvent.h"
#include "PlayerCaptureData.h"
#include "PlayerCapturePointComponentProperties.h"
#include "PlayerCompletedCaptureDelegate.h"
#include "PlayersUpdatedDelegate.h"
#include "ReplicatedArray_ATBLCharacterPtr.h"
#include "ReplicatedArray_PlayerCaptureData.h"
#include "ReplicatedSubobjectInterface.h"
#include "Replicated_Bool.h"
#include "Replicated_FPlayerCapturePointComponentProperties.h"
#include "PlayerCapturePointComponent.generated.h"

class AActor;
class ATBLCharacter;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerCapturePointComponent : public UActorComponent, public IReplicatedSubobjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCapturePointComponentProperties PlayerCapturePointComponentProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Properties, meta=(AllowPrivateAccess=true))
    FReplicated_FPlayerCapturePointComponentProperties ReplicatedTeamCapturePointComponentProperties;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersUpdated PlayersInCaptureVolumeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCompletedCapture OnPlayerCompletedCapture;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlockedStatusUpdated OnBlockedStatusUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayersInPlayerCapturePoint, meta=(AllowPrivateAccess=true))
    FReplicatedArray_ATBLCharacterPtr PlayersInVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsBlocked, meta=(AllowPrivateAccess=true))
    FReplicated_Bool bIsBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicatedArray_PlayerCaptureData PlayersCapturingData;
    
    UPlayerCapturePointComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerCapturePointProperties(FPlayerCapturePointComponentProperties Props);
    
    UFUNCTION(BlueprintCallable)
    void ResetCapturePoint();
    
    UFUNCTION(BlueprintCallable)
    void RefreshActorsInCaptureZone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool PlayerSatisfiesCaptureRequirments(ATBLCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackedCharacterKilled(const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackedCharacterDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Properties();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersInPlayerCapturePoint();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsBlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPlayerCaptureData> GetPlayersCaptureData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBlocked();
    
    UFUNCTION(BlueprintCallable)
    void EndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void DeactivatePlayerCapturePoint();
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePlayerCapturePoint();
    
    
    // Fix for true pure virtual functions not being implemented
};

