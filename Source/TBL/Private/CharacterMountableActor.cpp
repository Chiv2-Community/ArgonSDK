#include "CharacterMountableActor.h"
#include "CombatStateComponent.h"
#include "CombatStateQueue.h"
#include "CombatStateSynchronization.h"
#include "InteractableComponent.h"
#include "Net/UnrealNetwork.h"
#include "SiegeMountPoint.h"

void ACharacterMountableActor::OnRep_ChargePercent() {
}

void ACharacterMountableActor::OnCombatStateChanged(AActor* Actor, FName PreviousState, FName NewState, const FAttackInfo& EventAttackInfo, UCombatState* CombatState) {
}

void ACharacterMountableActor::OnCharacterMount(ATBLCharacter* Character) {
}

void ACharacterMountableActor::OnCharacterDismounted(ATBLCharacter* DismountedDriver, EDismountType DismountType) {
}



int32 ACharacterMountableActor::GetNumCharacters() const {
    return 0;
}

void ACharacterMountableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACharacterMountableActor, ChargePercent);
}

ACharacterMountableActor::ACharacterMountableActor() {
    this->CombatStateComponent = CreateDefaultSubobject<UCombatStateComponent>(TEXT("CombatStateComponent"));
    this->CombatStateSynchronization = CreateDefaultSubobject<UCombatStateSynchronization>(TEXT("CombatStateSynchronization"));
    this->CombatStateQueue = CreateDefaultSubobject<UCombatStateQueue>(TEXT("CombatStateQueue"));
    this->CombatStateSet = NULL;
    this->LeftInteractable = CreateDefaultSubobject<UInteractableComponent>(TEXT("LeftInteractable"));
    this->RightInteractable = CreateDefaultSubobject<UInteractableComponent>(TEXT("RightInteractable"));
    this->LeftMountPoint = CreateDefaultSubobject<USiegeMountPoint>(TEXT("LeftMountPoint"));
    this->RightMountPoint = CreateDefaultSubobject<USiegeMountPoint>(TEXT("RightMountPoint"));
    this->ChargeToDamageScale = NULL;
    this->ChargePercent = 0.00f;
    this->ChargeTime = 2.00f;
    this->TwoPlayerChargeBonus = 1.25f;
    this->PhysAsset = NULL;
    this->CharacterMountableActorAnimName = TEXT("CharacterMountableActor");
    this->MinimumChargePercent = 0.20f;
}

