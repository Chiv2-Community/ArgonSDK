#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "DeathDamageTakenEvent.h"
#include "DeathEvent.h"
#include "TBLGameScoringInfo.generated.h"

class AActor;
class AController;
class APawn;
class UCurveFloat;
class UDamageSource;
class UDataTable;

UCLASS(Blueprintable, NotPlaceable)
class ATBLGameScoringInfo : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GameScoringDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TeamScoreFormatDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LongshotCurve;
    
    ATBLGameScoringInfo();
    UFUNCTION(BlueprintCallable)
    void PlayerKilled(AController* Killer, AController* Killed, UDamageSource* DamageSource, FDeathEvent DeathEvent, const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void PawnRevived(APawn* RevivedPlayer, APawn* RevivorPlayer);
    
    UFUNCTION(BlueprintCallable)
    void PawnDowned(APawn* DownedPlayer, AActor* DamageCauser, UDamageSource* DamageSource);
    
    UFUNCTION(BlueprintCallable)
    void OnHorseKilled(const FDeathDamageTakenEvent& DamageEvent);
    
};

