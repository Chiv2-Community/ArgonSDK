#include "ReplicationTestActor.h"
#include "ReplicationTestActorComponent.h"

AReplicationTestActor::AReplicationTestActor() {
    this->ReplicationTestActorComponent = CreateDefaultSubobject<UReplicationTestActorComponent>(TEXT("HUDMarkerComponent"));
}

