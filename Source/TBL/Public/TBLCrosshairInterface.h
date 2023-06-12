#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DamageTakenEvent.h"
#include "TBLCrosshairInterface.generated.h"

UINTERFACE(Blueprintable)
class UTBLCrosshairInterface : public UInterface {
    GENERATED_BODY()
};

class ITBLCrosshairInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableCombatCondition(const FString& Keybinding, FName Condition, bool Enable, const FText& HintText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairWasParried();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairTutorialSuccessMessage(const FText& CustomText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairTutorialNeutralMessage(const FText& CustomText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairTutorialFailedMessage(const FText& CustomText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairProjectileFired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairPostShuffleMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairPostRespawnMessage(const FText& ClassName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairOutOfCombatWarning(bool bShowMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairLostLimbMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairHoldingProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairHoldingInitiated(bool IsRangedAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairHoldingCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairHoldingAborted(bool IsStateEnd, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairGameplayEvent(FName Event, bool Enable, float Scaling, bool IsPositive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairDamageTakenEvent(float Damage, float HitDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrosshairDamageEvent(FName Event, const FDamageTakenEvent& DamageTakenEvent, bool IsEnemy);
    
};

