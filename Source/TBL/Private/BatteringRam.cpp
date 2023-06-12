#include "BatteringRam.h"
#include "CombatStateComponent.h"
#include "CombatStateQueue.h"
#include "CombatStateSynchronization.h"
#include "InteractableComponent.h"
#include "Net/UnrealNetwork.h"
#include "SiegeMountPoint.h"

void ABatteringRam::OnRep_ChargePercent() {
}

void ABatteringRam::OnPushableActivated(bool bIsActive) {
}

void ABatteringRam::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState) {
}

void ABatteringRam::OnCharacterMount(ATBLCharacter* Character) {
}

void ABatteringRam::OnCharacterDismounted(ATBLCharacter* DismountedDriver, EDismountType DismountType) {
}

int32 ABatteringRam::GetNumCharacters() const {
    return 0;
}

void ABatteringRam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABatteringRam, ChargePercent);
}

ABatteringRam::ABatteringRam() {
    this->CombatStateComponent = CreateDefaultSubobject<UCombatStateComponent>(TEXT("CombatStateComponent"));
    this->CombatStateSynchronization = CreateDefaultSubobject<UCombatStateSynchronization>(TEXT("CombatStateSynchronization"));
    this->CombatStateQueue = CreateDefaultSubobject<UCombatStateQueue>(TEXT("CombatStateQueue"));
    this->CombatStateSet = NULL;
    this->LeftInteractable = CreateDefaultSubobject<UInteractableComponent>(TEXT("LeftInteractable"));
    this->RightInteractable = CreateDefaultSubobject<UInteractableComponent>(TEXT("RightInteractable"));
    this->LeftMountPoint = CreateDefaultSubobject<USiegeMountPoint>(TEXT("LeftMountPoint"));
    this->RightMountPoint = CreateDefaultSubobject<USiegeMountPoint>(TEXT("RightMountPoint"));
    this->DamageScale = NULL;
    this->ChargePercent = 0.00f;
    this->ChargeTime = 2.00f;
    this->TwoPlayerChargeBonus = 1.25f;
    this->PushableComponent = NULL;
}

