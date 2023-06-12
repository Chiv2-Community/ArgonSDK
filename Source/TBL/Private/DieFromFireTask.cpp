#include "DieFromFireTask.h"
#include "Net/UnrealNetwork.h"

void UDieFromFireTask::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDieFromFireTask, bIsFinished);
}

UDieFromFireTask::UDieFromFireTask() {
    this->bIsFinished = false;
}

