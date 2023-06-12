#include "TBLAchievementTaskCountable.h"
#include "Net/UnrealNetwork.h"

void UTBLAchievementTaskCountable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTBLAchievementTaskCountable, Count);
    DOREPLIFETIME(UTBLAchievementTaskCountable, RequiredCount);
}

UTBLAchievementTaskCountable::UTBLAchievementTaskCountable() {
    this->Count = 0;
    this->RequiredCount = 1;
}

