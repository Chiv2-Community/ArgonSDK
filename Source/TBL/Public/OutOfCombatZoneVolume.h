#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CombatZoneVolumeSizeParam.h"
#include "EFaction.h"
#include "EOutOfCombatZoneVolumeActivateDeactivateAction.h"
#include "Templates/SubclassOf.h"
#include "OutOfCombatZoneVolume.generated.h"

class AOutOfCombatZoneAuthority;
class ATBLPlayerController;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class AOutOfCombatZoneVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOutOfCombatZoneAuthority> AuthorityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PreviewMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombatZoneVolumeSizeParam> ZoneSizeThresholdArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShrinkZoneAccordingToThresholds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsActive, meta=(AllowPrivateAccess=true))
    uint8 bIsActive: 1;
    
public:
    AOutOfCombatZoneVolume();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ResizeCombatZoneBasedOnNextThreshold();
    
    UFUNCTION(BlueprintCallable)
    void ResetCombatZoneThreshold();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(EOutOfCombatZoneVolumeActivateDeactivateAction StateChanged);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCombatZone(const FVector& Point) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
private:
    UFUNCTION(BlueprintCallable)
    void InitCombatZoneThresholds();
    
public:
    UFUNCTION(BlueprintCallable)
    FCombatZoneVolumeSizeParam GetNextZoneThreshold();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetVisualizationFade(ATBLPlayerController* LocalController, bool bShouldFade);
    
    UFUNCTION(BlueprintCallable)
    bool CanResizeToNextThreshold(float NewPlayerRatio, float NewTimeRatio);
    
    UFUNCTION(BlueprintCallable)
    void ActivateDeactivate(EOutOfCombatZoneVolumeActivateDeactivateAction Action);
    
};

