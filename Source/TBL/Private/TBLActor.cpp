#include "TBLActor.h"

void ATBLActor::WakeUpNetDormancyForSeconds(float Seconds) {
}

TArray<AActor*> ATBLActor::GetAIHintLocations() const {
    return TArray<AActor*>();
}

void ATBLActor::FallBackToSleep() {
}

bool ATBLActor::CanBeBaseForCharacterTBL_Implementation(APawn* Pawn) const {
    return false;
}

ATBLActor::ATBLActor() {
    this->TimeToWakeUpNetDormancyWhenSubobjectChanges = 9.90f;
}

