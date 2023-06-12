#include "Ballista.h"
#include "InteractableComponent.h"
#include "Net/UnrealNetwork.h"
#include "RepairableComponent.h"
#include "StatsComponent.h"

void ABallista::SetBroken_Implementation(bool bInBroken) {
}

void ABallista::OnRep_RotationSpeed() {
}

void ABallista::OnRep_Broken() {
}

void ABallista::OnKilled(const FDeathDamageTakenEvent& Event) {
}

void ABallista::OnHealthChanged(float Amount, AActor* Initiator) {
}

void ABallista::OnDamageTaken(const FDamageTakenEvent& Event) {
}

void ABallista::EventUsePressed(APawn* InPawn, UInteractableComponent* InInteractable) {
}

void ABallista::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABallista, RemoteViewYaw);
    DOREPLIFETIME(ABallista, RotationSpeed);
    DOREPLIFETIME(ABallista, bLoaded);
    DOREPLIFETIME(ABallista, bReplicatedIsBroken);
    DOREPLIFETIME(ABallista, LastControlRotation);
}

ABallista::ABallista() {
    this->Interactable = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
    this->Abilities = NULL;
    this->Repairable = CreateDefaultSubobject<URepairableComponent>(TEXT("Repairable"));
    this->Stats = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats"));
    this->TurnLimitStrength = 90.00f;
    this->RemoteViewYaw = 0;
    this->RotationSpeed = 0.00f;
    this->bLoaded = false;
    this->bRepaired = false;
    this->TurningSoundAKEvent = NULL;
    this->ReloadSound = NULL;
    this->HealthyMesh = NULL;
    this->DamagedMesh = NULL;
    this->BrokenMesh = NULL;
    this->BrokenParticle = NULL;
    this->BrokenAnimation = NULL;
    this->AnimationBlueprint = NULL;
    this->DamagedThreshold = 0.50f;
    this->bIsBroken = false;
    this->bReplicatedIsBroken = false;
    this->HorizLockId = 0;
    this->VertLockId = 0;
    this->TurnRateId = 0;
    this->RotationWeight = 0.00f;
    this->RotationWeightInterpSpeed = 50.00f;
}

