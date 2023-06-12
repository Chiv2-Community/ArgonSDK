#include "HeadlookComponent.h"
#include "Net/UnrealNetwork.h"

void UHeadlookComponent::SetTargetActor(AActor* Target) {
}

void UHeadlookComponent::GetHeadlookLocation(FVector& OutHeadlookLocation, bool& OutIsHeadlook) {
}

void UHeadlookComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHeadlookComponent, TargetActor);
}

UHeadlookComponent::UHeadlookComponent() {
    this->TargetActor = NULL;
    this->LocalNearestActor = NULL;
    this->DistanceSquaredToLocalNearestActor = 600.00f;
}

