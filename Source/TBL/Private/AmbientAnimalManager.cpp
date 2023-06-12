#include "AmbientAnimalManager.h"
#include "Perception/AIPerceptionComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

void AAmbientAnimalManager::ReseedAnimalActors() {
}

void AAmbientAnimalManager::RegenerateAndReseedAnimalActors() {
}

void AAmbientAnimalManager::PopAnimal(EAnimalPopType Type) {
}

void AAmbientAnimalManager::OnRep_FleeData() {
}

void AAmbientAnimalManager::HideAnimals() {
}

void AAmbientAnimalManager::FleeAnimals(FVector InstigatorLocation) {
}

void AAmbientAnimalManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAmbientAnimalManager, FleeData);
}

AAmbientAnimalManager::AAmbientAnimalManager() {
    this->GeneratingRadius = 0.66f;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
}

