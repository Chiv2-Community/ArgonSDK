#include "InvocationActor.h"

FInvocationActor::FInvocationActor() {
    this->Actor = NULL;
    this->ActorDestroyed = NULL;
    this->WorldTimeMarkedForDestroy = 0.00f;
    this->bMarkedForTimedDestroy = false;
}

