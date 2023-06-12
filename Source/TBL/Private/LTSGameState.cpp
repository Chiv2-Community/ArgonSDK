#include "LTSGameState.h"
#include "Net/UnrealNetwork.h"

void ALTSGameState::OnRep_LTSHudMarkerComponentClass() {
}

void ALTSGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALTSGameState, HudMarkerThreshold);
    DOREPLIFETIME(ALTSGameState, LTSHudMarkerComponentClass);
}

ALTSGameState::ALTSGameState() {
    this->HudMarkerThreshold = 5;
    this->LTSHudMarkerComponentClass = NULL;
}

