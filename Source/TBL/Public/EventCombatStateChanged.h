#pragma once
#include "CoreMinimal.h"
#include "AttackInfo.h"
#include "TriggeredAction.h"
#include "EventCombatStateChanged.generated.h"

class AActor;
class UCombatState;

UCLASS(Blueprintable, EditInlineNew)
class UEventCombatStateChanged : public UTriggeredAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatStateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerOnEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackID;
    
    UEventCombatStateChanged();
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* InCombatState);
    
};

