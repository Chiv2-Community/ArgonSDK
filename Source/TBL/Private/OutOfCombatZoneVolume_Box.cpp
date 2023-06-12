#include "OutOfCombatZoneVolume_Box.h"
#include "Net/UnrealNetwork.h"

void AOutOfCombatZoneVolume_Box::OnRep_BoxParams() {
}


void AOutOfCombatZoneVolume_Box::GetOverlappingCharacters(TArray<ATBLCharacter*>& OutChars) {
}

void AOutOfCombatZoneVolume_Box::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOutOfCombatZoneVolume_Box, BoxParams);
}

AOutOfCombatZoneVolume_Box::AOutOfCombatZoneVolume_Box() {
}

