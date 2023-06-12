#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttackInfo.h"
#include "TurnLockParams.h"
#include "LockTurnAngle.generated.h"

class AActor;
class UCombatState;

UCLASS(Blueprintable)
class ULockTurnAngle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HorizLockId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VertLockId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DelayTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EndTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTurnLockParams TurnLock;
    
    ULockTurnAngle();
    UFUNCTION(BlueprintCallable)
    void OnRootMotionChanged(bool bRootMotion);
    
    UFUNCTION(BlueprintCallable)
    void OnEndTimer(float OverTime);
    
    UFUNCTION(BlueprintCallable)
    void OnDelayTimer(float OverTime);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateEvent(AActor* InActor, FName EventName, const FAttackInfo& EventAttackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState);
    
};

