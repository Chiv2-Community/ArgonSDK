#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BreakableOnDamageTakenSignatureDelegate.h"
#include "BreakableOnKilledSignatureDelegate.h"
#include "BreakableThreshold.h"
#include "BreakableThresholdReachedDelegate.h"
#include "DamageTakenEvent.h"
#include "DeathDamageTakenEvent.h"
#include "EFaction.h"
#include "StageActorAction.h"
#include "BreakableComponent.generated.h"

class AActor;
class UStatsComponent;
class UTBLGameScoringComponent;
class UTeamOwnershipComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TBL_API UBreakableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakableOnDamageTakenSignature OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakableOnKilledSignature OnKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakableThresholdReached OnBreakableThresholdReached;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStatsComponent> StatsComponent;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTeamOwnershipComponent> TeamOwnershipComponent;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTBLGameScoringComponent> GameScoringComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction FriendlyTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBreakableThreshold> ThresholdsWithObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageActorAction StageActorAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FocalPointOffset;
    
    UBreakableComponent();
    UFUNCTION(BlueprintCallable)
    void SetHealth(float InHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetFriendlyTeam(EFaction InFriendlyTeam);
    
    UFUNCTION(BlueprintCallable)
    void Killed(const FDeathDamageTakenEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void HealthStatChanged(float Amount, AActor* Initiator);
    
    UFUNCTION(BlueprintCallable)
    void Damaged(const FDamageTakenEvent& Event);
    
};

