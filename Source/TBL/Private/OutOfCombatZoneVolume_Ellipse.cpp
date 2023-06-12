#include "OutOfCombatZoneVolume_Ellipse.h"
#include "Net/UnrealNetwork.h"

void AOutOfCombatZoneVolume_Ellipse::RecheckCollisions() {
}

void AOutOfCombatZoneVolume_Ellipse::OnRep_EllipseParams() {
}


void AOutOfCombatZoneVolume_Ellipse::GetOverlappingCharacters(TArray<ATBLCharacter*>& OutChars) {
}

void AOutOfCombatZoneVolume_Ellipse::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOutOfCombatZoneVolume_Ellipse, EllipseParams);
}

AOutOfCombatZoneVolume_Ellipse::AOutOfCombatZoneVolume_Ellipse() {
}

