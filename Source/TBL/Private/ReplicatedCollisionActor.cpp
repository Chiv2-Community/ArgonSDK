#include "ReplicatedCollisionActor.h"
#include "Net/UnrealNetwork.h"

void AReplicatedCollisionActor::SetReplicatedCollision(bool bEnabled) {
}

void AReplicatedCollisionActor::OnRep_ReplicatedCollision() {
}


bool AReplicatedCollisionActor::GetReplicatedCollision() {
    return false;
}

void AReplicatedCollisionActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AReplicatedCollisionActor, bReplicatedCollision);
}

AReplicatedCollisionActor::AReplicatedCollisionActor() {
    this->bReplicatedCollision = true;
}

