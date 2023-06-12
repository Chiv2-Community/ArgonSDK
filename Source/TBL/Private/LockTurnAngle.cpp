#include "LockTurnAngle.h"

void ULockTurnAngle::OnRootMotionChanged(bool bRootMotion) {
}

void ULockTurnAngle::OnEndTimer(float OverTime) {
}

void ULockTurnAngle::OnDelayTimer(float OverTime) {
}

void ULockTurnAngle::OnCombatStateEvent(AActor* InActor, FName EventName, const FAttackInfo& EventAttackInfo) {
}

void ULockTurnAngle::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState) {
}

ULockTurnAngle::ULockTurnAngle() {
    this->bEnabled = false;
    this->HorizLockId = 0;
    this->VertLockId = 0;
    this->DelayTimerHandle = 0;
    this->EndTimerHandle = 0;
}

