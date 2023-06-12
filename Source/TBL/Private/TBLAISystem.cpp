#include "TBLAISystem.h"
#include "Templates/SubclassOf.h"

void UTBLAISystem::RemoveAvoidanceArea(UObject* Instigator) {
}

void UTBLAISystem::OnPlayerPossessed(AController* Controller, ATBLCharacter* Character) {
}

void UTBLAISystem::NotifyControllerTargetLocation(ATBLAIController* Controller, const FVector& NewTargetLocation) {
}

void UTBLAISystem::NotifyControllerTarget(ATBLAIController* Controller, AActor* NewTarget) {
}

FVector UTBLAISystem::GetSpawnCenter(EFaction Faction) {
    return FVector{};
}

float UTBLAISystem::GetObjectiveTimeRemaining() const {
    return 0.0f;
}

float UTBLAISystem::GetObjectiveTimePercentRemaining() const {
    return 0.0f;
}

int32 UTBLAISystem::GetNumControllersWithWeapon(TSubclassOf<AInventoryItem> Weapon) const {
    return 0;
}

int32 UTBLAISystem::GetNumControllersWithBehaviour(TSubclassOf<UUtilityAI_Behavior> Behaviour) const {
    return 0;
}

int32 UTBLAISystem::GetNumControllersTargettingLocation(const FVector& TargetLocation) const {
    return 0;
}

int32 UTBLAISystem::GetNumControllersTargetting(AActor* Target) const {
    return 0;
}

int32 UTBLAISystem::GetNumControllersRegistered(EFaction Faction) const {
    return 0;
}

TSet<ATBLAIController*> UTBLAISystem::GetControllersWithWeapon(TSubclassOf<AInventoryItem> Weapon) const {
    return TSet<ATBLAIController*>();
}

TSet<ATBLAIController*> UTBLAISystem::GetControllersWithBehaviour(TSubclassOf<UUtilityAI_Behavior> Behaviour) const {
    return TSet<ATBLAIController*>();
}

TSet<ATBLAIController*> UTBLAISystem::GetControllersTargettingLocation(const FVector& TargetLocation) const {
    return TSet<ATBLAIController*>();
}

TSet<ATBLAIController*> UTBLAISystem::GetControllersTargetting(AActor* Target) const {
    return TSet<ATBLAIController*>();
}

void UTBLAISystem::CreateAvoidanceArea(UObject* Instigator, const FVector& Location, float Radius) {
}

UTBLAISystem::UTBLAISystem() {
    this->TagSystem = NULL;
    this->LastKnownObjectiveTimeRemaining = -1.00f;
    this->LastKnownObjectiveTimePercentRemaining = -1.00f;
}

