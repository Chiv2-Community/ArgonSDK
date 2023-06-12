#pragma once
#include "CoreMinimal.h"
#include "DeathDamageTakenEvent.h"
#include "ECapturePointState.h"
#include "ECaptureVolumeControlType.h"
#include "TBLActor.h"
#include "UpdatePlayersInCapturePointDelegate.h"
#include "CaptureVolume.generated.h"

class AActor;
class ATBLCharacter;
class ATBLTeam;
class UBoxComponent;
class UCapsuleComponent;

UCLASS(Abstract, Blueprintable)
class ACaptureVolume : public ATBLActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CaptureBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CaptureCapsule;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUpdatePlayersInCapturePoint PlayersInCaptureVolumeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATBLCharacter*> PlayersInCaptureVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCaptureBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCaptureCapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECaptureVolumeControlType::Type> CapturePointRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CaptureState, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECapturePointState::Type> CurrentCaptureState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECapturePointState::Type> PreviousCaptureState;
    
    ACaptureVolume();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerFromCapturePoint(ATBLCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void RefreshActorsInCaptureZone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayerSatisfiesCaptureRequirments(ATBLCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackedCharacterKilled(const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackedCharacterDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CaptureState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCaptureStateNeutralizing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCaptureStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCaptureStateContested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCaptureStateCapturing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCaptureStateCaptured();
    
    UFUNCTION(BlueprintCallable)
    ATBLTeam* GetControllingTeam(bool& IsTie);
    
    UFUNCTION(BlueprintCallable)
    void EndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void ClientEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void ClientBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerToCapturePoint(ATBLCharacter* Player);
    
};

