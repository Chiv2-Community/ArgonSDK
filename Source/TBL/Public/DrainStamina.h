#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttackInfo.h"
#include "DeathDamageTakenEvent.h"
#include "DrainStamina.generated.h"

class AActor;
class UCurveFloat;

UCLASS(Blueprintable)
class UDrainStamina : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> CombatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DrainRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* DrainRateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastTickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DisabledId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    UDrainStamina();
protected:
    UFUNCTION(BlueprintCallable)
    void OnKilled(const FDeathDamageTakenEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateEvent(AActor* InActor, FName EventName, const FAttackInfo& EventAttackInfo);
    
};

