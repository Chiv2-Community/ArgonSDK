#include "TBLAnimal.h"
#include "Net/UnrealNetwork.h"

void ATBLAnimal::StopPanicking() {
}

void ATBLAnimal::StartPanicking() {
}

void ATBLAnimal::SetCharMoveTickingAllowed(const bool bTickAllowed) {
}

void ATBLAnimal::Ragdoll() {
}

void ATBLAnimal::OnRep_bPanicking() {
}

void ATBLAnimal::OnKilled(const FDeathDamageTakenEvent& DamageEvent) {
}

void ATBLAnimal::OnDamageTaken(const FDamageTakenEvent& DamageEvent) {
}


void ATBLAnimal::CheckCharMoveTick(const bool bAsync) {
}

void ATBLAnimal::CarryableAnimalEvent(FName EventName, ATBLCharacter* ParentCharacter) {
}

void ATBLAnimal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATBLAnimal, bPanicking);
}

ATBLAnimal::ATBLAnimal() {
    this->Stats = NULL;
    this->NoiseEmitter = NULL;
    this->AnimInstance = NULL;
    this->AnimationSet = NULL;
    this->AnimalHolder = NULL;
    this->bIsBeingThrown = false;
    this->bIsBeingHeld = false;
    this->bPanicking = false;
    this->PanicDuration = 2.00f;
    this->bReplicatePanicking = true;
    this->MaxWalkSpeed = 0.00f;
    this->MaxPanicWalkSpeed = 0.00f;
    this->MaxHealth = 40.00f;
    this->bCharMoveTickingAllowed = true;
    this->bIsSignificant = false;
}

