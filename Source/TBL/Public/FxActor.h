#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeathDamageTakenEvent.h"
#include "FxActor.generated.h"

class AController;

UCLASS(Blueprintable, Config=Game)
class AFxActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableCollisionOnTearOff: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TornOffLifeSpan;
    
public:
    AFxActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTornOff();
    
    UFUNCTION(BlueprintCallable)
    void OnKilled(const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void DisableAndDestroy(float LifeSpan);
    
private:
    UFUNCTION(BlueprintCallable)
    void CleanupAbilityActorsInternal(AController* Controller);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CleanupAbilityActors();
    
};

