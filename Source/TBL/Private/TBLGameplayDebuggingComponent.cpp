#include "TBLGameplayDebuggingComponent.h"
#include "Net/UnrealNetwork.h"

void UTBLGameplayDebuggingComponent::ServerSetDebugTarget_Implementation(AActor* DebugTarget) {
}
bool UTBLGameplayDebuggingComponent::ServerSetDebugTarget_Validate(AActor* DebugTarget) {
    return true;
}

void UTBLGameplayDebuggingComponent::OnRep_DesyncDebugInfo() {
}

void UTBLGameplayDebuggingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTBLGameplayDebuggingComponent, InvocationDebugInfo);
    DOREPLIFETIME(UTBLGameplayDebuggingComponent, PropertyDebugInfo);
    DOREPLIFETIME(UTBLGameplayDebuggingComponent, PhysicsDebugInfo);
    DOREPLIFETIME(UTBLGameplayDebuggingComponent, BonesDebugInfo);
    DOREPLIFETIME(UTBLGameplayDebuggingComponent, BonesDebugNames);
    DOREPLIFETIME(UTBLGameplayDebuggingComponent, ReplicationDebugInfo);
    DOREPLIFETIME(UTBLGameplayDebuggingComponent, DebugProjectileHit);
    DOREPLIFETIME(UTBLGameplayDebuggingComponent, DesyncDebugInfo);
}

UTBLGameplayDebuggingComponent::UTBLGameplayDebuggingComponent() {
    this->LastTickRate = 0.00f;
    this->ShowDebugTargetActor = NULL;
    this->ClientDebugComponent = NULL;
}

