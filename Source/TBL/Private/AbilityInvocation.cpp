#include "AbilityInvocation.h"

void AAbilityInvocation::Terminate() {
}

void AAbilityInvocation::RemoveInvocationActor(AActor* Actor) {
}

void AAbilityInvocation::OnActorDestroyed(AActor* Actor) {
}

void AAbilityInvocation::FindInvocationActors(FName ActorName, TArray<AActor*>& OutActors) {
}

int32 AAbilityInvocation::FindInvocationActor(AActor* Actor) {
    return 0;
}

void AAbilityInvocation::AddInvocationActor(FName ActorName, AActor* Actor) {
}

AAbilityInvocation::AAbilityInvocation() {
    this->Initiator = NULL;
    this->InitiatedAbilitySpec = NULL;
    this->ID = 0;
    this->InvocationRegistry = NULL;
    this->ActivationMethod = NULL;
    this->TargetMethod = NULL;
    this->CompletionTime = 0.00f;
    this->bClientComplete = false;
    this->bActive = false;
    this->bActivationMethodFinished = false;
    this->bTargetMethodFinished = false;
    this->bClientInvocation = false;
    this->bCleanedUp = false;
    this->Flags = 0;
    this->InventoryItem = NULL;
    this->InventoryItemClass = NULL;
    this->AttackID = 0;
    this->RandomSeed = 0;
    this->bPendingCleanup = false;
    this->InitiatorWorld = NULL;
}

